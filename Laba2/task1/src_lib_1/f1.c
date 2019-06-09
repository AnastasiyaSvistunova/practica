#include <stdio.h>
#include <func.h>


_Bool isInArea(double x, double y) {
	if ((-1 <= y && y <= 0 && -1 <= x && x <= 0) || (x >= 0 && y >= 0 && x*x + y * y <= 1)) {
		return 1;
	}
	else {
		return 0;
	}
}