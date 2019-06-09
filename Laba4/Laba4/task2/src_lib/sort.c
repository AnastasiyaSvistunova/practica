#include <f.h>

void sort(int *arr, int n) {		//Сортировка Шелла
	int j, step, tmp;
	for (step = n / 2; step > 0; step /= 2) {
		for (int i = step; i < n; i++) {
			tmp = arr[i];
			for (j = i; j >= step; j -= step) {
				if (tmp < arr[j - step]) {
					arr[j] = arr[j - step];
				}
				else {
					break;
				}
			}
			arr[j] = tmp;
		}
	}
}