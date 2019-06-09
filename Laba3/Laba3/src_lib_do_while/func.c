#include <stdio.h>
#include <f.h>
#include <math.h>
double summ(int n) {
	double sum = 0;
	int i = 0;
	do {
		sum = sum + pow(-1, i)*(i + 1) / (pow(i, 3) + 2);
		i = i + 1;
	} while (i < n);
	return sum;
}
double summ2(double eps) {
	double sum = 0;
	int i = 0;
	do {
		sum = sum + pow(-1, i)*(i + 1) / (pow(i, 3) + 2);
		i++;
	} while (fabs(pow(-1, i)*(i + 1) / (pow(i, 3) + 2)) >= eps);
	return sum;
}
void print(int n, int k) {
	int i = 0;
	do {
		if (i % k != 0)
		{
			printf("%Lf ", pow(-1, i)*(i + 1) / (pow(i, 3) + 2));
			i++;
		}
		else {
			i++;
			continue;
		}
	} while (i < n);
	printf("\n");
}
int findFirstElement(double eps) {
	int i = 0;
	do {
		if (fabs(pow(-1, i)*(i + 1) / (pow(i, 3) + 2)) <= eps) {
			break;
		}
		i++;
	} while (1);
	return i;
}
int findFirstNegativeElement(double eps) {
	int i = 0;
	do {
		if (fabs(pow(-1, i)*(i + 1) / (pow(i, 3) + 2)) <= eps & pow(-1, i)*(i + 1) / (pow(i, 3) + 2) < 0) {
			return i;
		}
		i++;
	} while (1);
}