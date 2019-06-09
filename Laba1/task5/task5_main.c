#include <stdio.h>
#include "task5_func.c"

void main() {
	double x = 3, F;
	F = f(x);
	printf("%.4f\n", F);
	scanf("%Lf", &x);
	F = f(x);
	printf("%.4f\n", F);
	system("pause");
}