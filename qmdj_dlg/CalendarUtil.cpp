#include "CalendarUtil.h"
#include "vsop87d_table.h"

#include <cmath>


double get_julian_day(const DateTime * cdate)
{ 
	DateTime date;
	int y, m, B;
	date = *cdate;
	y = date.years;
	m = date.months;
	if (date.months <= 2)
	{
		y = date.years - 1;
		m = date.months + 12;
	}
	// Correct for the lost days in Oct 1582 when the Gregorian calendar 
	// replaced the Julian calendar.
	B = -2;
	if (date.years > 1582 || (date.years == 1582 && (date.months > 10 || (date
		.months == 10 && date.days >= 15))))
	{
		B = y / 400 - y / 100;
	}
	return (floor(365.25 * y) + 
		floor(30.6001 * (m + 1)) + B + 1720996.5 + 
		date.days + date.hours / 24.0 + date.minutes / 1440.0 + date. 
		seconds / 86400.0);
}

double get_julian_day(int years, int months, int days, int hours, int minutes, double seconds)
{
	DateTime dt = {years,months,days,hours,minutes,seconds};
	return get_julian_day(&dt);
}

// 计算周期项
static double CalcPeriodicTerm(const double table[][3], int len, double tau /*儒略千年数*/)
{
	double result = 0;

	for (int i=0; i<len; i++)
	{
		result += table[i][0] * cos( table[i][1] + table[i][2]*tau );
	}

	return result;
}

double CalcSunEclipticLongitudeEC(double dt)
{
	double L0 = CalcPeriodicTerm(Earth_L0, sizeof(Earth_L0) / sizeof(double[3]), dt);
	double L1 = CalcPeriodicTerm(Earth_L1, sizeof(Earth_L1) / sizeof(double[3]), dt);
	double L2 = CalcPeriodicTerm(Earth_L2, sizeof(Earth_L2) / sizeof(double[3]), dt);
	double L3 = CalcPeriodicTerm(Earth_L3, sizeof(Earth_L3) / sizeof(double[3]), dt);
	double L4 = CalcPeriodicTerm(Earth_L4, sizeof(Earth_L4) / sizeof(double[3]), dt);
	double L5 = CalcPeriodicTerm(Earth_L5, sizeof(Earth_L5) / sizeof(double[3]), dt);

	double L = (((((L5 * dt + L4) * dt + L3) * dt + L2) * dt + L1) * dt + L0) / 100000000.0;

	/*地心黄经 = 日心黄经 + 180度*/
//	return (Mod360Degree(Mod360Degree(L / RADIAN_PER_ANGLE) + 180.0));
	return 0;
}