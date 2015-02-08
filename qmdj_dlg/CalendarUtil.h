#pragma once

#include <cmath>
using namespace std;

typedef struct 
{ 
	int years;			/*!< Years.   All values are valid							*/ 
	int months;			/*!< Months.  Valid values : 1 (January) - 12 (December)	*/ 
	int days;			/*!< Days.    Valid values 1 - 28,29,30,31 Depends on month	*/ 
	int hours;			/*!< Hours.   Valid values 0 - 23.							*/ 
	int minutes;		/*!< Minutes. Valid values 0 - 59.							*/ 
	double seconds;		/*!< Seconds. Valid values 0 - 59.99999....					*/ 
}DateTime; 

// 计算儒略日
double get_julian_day(const DateTime * cdate);
double get_julian_day(int years, int months, int days, int hours, int minutes, double seconds);

// 计算太阳的地心黄经
double CalcSunEclipticLongitudeEC(double dt);

