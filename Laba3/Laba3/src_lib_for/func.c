double summ(int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + pow(-1, i)*(i + 1) / (pow(i, 3) + 2);
	}
	return sum;
}
double summ2(double eps) {
	double sum = 0;
	for (int i = 0; fabs(pow(-1, i)*(i + 1) / (pow(i, 3) + 2)) >= eps; i++) {
		sum = sum + pow(-1, i)*(i + 1) / (pow(i, 3) + 2);
	}
	return sum;
}
void print(int n, int k) {
	for (int i = 0; i < n; i++) {
		if (i % k != 0)
		{
			printf("%Lf ", pow(-1, i)*(i + 1) / (pow(i, 3) + 2));
		}
		else {
			continue;
		}
	}
	printf("\n");
}
int findFirstElement(double eps) {
	int i = 0;
	for (;;) {
		if (fabs(pow(-1, i)*(i + 1) / (pow(i, 3) + 2)) <= eps) {
			break;
		}
		i++;
	}
	return i;
}
int findFirstNegativeElement(double eps) {
	int i = 0;
	for (;;) {
		if (fabs(pow(-1, i)*(i + 1) / (pow(i, 3) + 2)) <= eps & pow(-1, i)*(i + 1) / (pow(i, 3) + 2) < 0) {
			return i;
		}
		i++;
	}
}