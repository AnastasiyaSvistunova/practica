#include <stdio.h>

double x = 3, result;

void f(void);

void main() {
	f();
	printf("%.4f\n", result);
	scanf("%Lf", &x);
	f();
	printf("%.4f\n", result);
	system("pause");
}
void f(void) {
	result = (4 - x * x) / 2;
}