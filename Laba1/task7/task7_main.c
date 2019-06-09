#include <stdio.h>
#include "func.h"
#include "task7_func.c"
extern double x, result;
void main() {
	f();
	printf("%.4f\n", result);
	scanf("%Lf", &x);
	f();
	printf("%.4f\n", result);
	system("pause");
}