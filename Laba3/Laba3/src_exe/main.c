#include <stdio.h>
#include <stdlib.h>
#include <f.h>

void main() {
	_Bool menu = 1;
	while (menu != 0) {
		system("cls");
		printf("1. task 1\n2. task 2\n3. task 3\n4. task 4\n5. task 5\n6. exit\nInput task number: ");
		int Number;
		scanf("%d", &Number);
		switch (Number)
		{
		case 1: {
			system("cls");
			int n;
			printf("Input n: ");
			scanf("%d", &n);
			printf("Result: %f\n", summ(n));
			system("pause");
			break;
		}
		case 2: {
			system("cls");
			double eps;
			printf("Input eps: ");
			scanf("%Lf", &eps);
			printf("Result: %f\n", summ2(eps));
			system("pause");
			break;
		}
		case 3: {
			system("cls");
			double n, k;
			printf("Input n: ");
			scanf("%Lf", &n);
			printf("Input k: ");
			scanf("%Lf", &k);
			print(n, k);
			system("pause");
			break; }
		case 4: {
			system("cls");
			double eps;
			printf("Input eps: ");
			scanf("%Lf", &eps);
			printf("First element: %d\n", findFirstElement(eps));
			system("pause");
			break;
		}
		case 5: {
			system("cls");
			double eps;
			printf("Input eps: ");
			scanf("%Lf", &eps);
			printf("First Negative element: %d\n", findFirstNegativeElement(eps));
			system("pause");
			break;
		}
		case 6:
			menu = 0;
			break;
		default:
			printf("Wrong task\n");
			break;
		}
	}
}