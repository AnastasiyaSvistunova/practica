#include <stdio.h>

int main() {
	double x = 3, f;
	f = ((4 - x * x) / 2);
	printf("%.4f\n", f);
	scanf("%Lf", &x);
	f = ((4 - x * x) / 2);
	printf("%.4f\n", f);
	system("pause");
	return 0;
}