#include <stdio.h>
#include <stdlib.h>
#include <func.h>

void main(void) {
	char a;
	printf("1. task 1\n2. task 2\n");
	a = getch();
	switch (a)
	{
	case '1': {
		system("cls");
		double x, y;
		printf("input x & y: ");
		scanf("%Lf%Lf", &x, &y);
		if (isInArea(x, y) == 1) {
			printf("hit\n");
		}
		else {
			printf("miss\n");
		}
		break; }
	case '2': {
		system("cls");
		double x;
		printf("Input x: ");
		scanf("%Lf", &x);
		printf("Result: %f\n", f(x));
		break; }
	default:
		printf("Wrong task.\n");
		break;
	}
	system("pause");
}