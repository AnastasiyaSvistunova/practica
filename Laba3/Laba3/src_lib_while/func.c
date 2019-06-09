#include <stdio.h>
#include <f.h>
#include <math.h>
double summ(int n) {
	double sum = 0;
	int i = 0;
	while (i < n) {
		sum = sum + pow(-1, i)*(i + 1) / (pow(i, 3) + 2);
		i = i + 1;
	}
	return sum;
}
double summ2(double eps) {
	double sum = 0;
	int i = 0;
	while (fabs(pow(-1, i)*(i + 1) / (pow(i, 3) + 2)) >= eps) {
		sum = sum + pow(-1, i)*(i + 1) / (pow(i, 3) + 2);
		i++;
	}
	return sum;
}
void print(int n, int k) {
	int i = 0;
	while (i < n) {
		if (i % k != 0)
		{
			printf("%Lf ", pow(-1, i)*(i + 1) / (pow(i, 3) + 2));
			i++;
		}
		else {
			i++;
			continue;
		}
	}
	printf("\n");
}
int findFirstElement(double eps) {
	int i = 0;
	while (1) {
		if (fabs(pow(-1, i)*(i + 1) / (pow(i, 3) + 2)) <= eps) {
			break;
		}
		i++;
	}
	return i;
}
int findFirstNegativeElement(double eps) {
	int i = 0;
	while (1) {
		if (fabs(pow(-1, i)*(i + 1) / (pow(i, 3) + 2)) <= eps & pow(-1, i)*(i + 1) / (pow(i, 3) + 2) < 0) {
			return i;
		}
		i++;
	}
}