#include <f.h>
#include <stdlib.h>
void main(void)
{ 
	double x = 3;
	double result;
	f(&x, &result);
	printf("%.4f\n", result);
	scanf_s("%Lf", &x);
	f(&x, &result);
	printf("%.4f\n", result);
	system("pause");
}