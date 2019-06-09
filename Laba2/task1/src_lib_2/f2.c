#include <stdio.h>
#include <func.h>
#include <math.h>

double f(double x) {
	if (x > 3)
		return 1.2*pow(x, 2) - 3 * x - 9;
	else
		return	12 / (2 * pow(x, 2) + 1);
}