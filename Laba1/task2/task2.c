#include <stdio.h>

double f(double x) {
	return (4 - x * x) / 2;
}
void main() {
	double x = 3, F;
	F = f(x);
	printf("%.4f\n", F);
	scanf("%Lf", &x);
	F = f(x);
	printf("%.4f\n", F);
	system("pause");
}