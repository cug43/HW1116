#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	srand(time(0));

	int arr[6];
	printf("隨機六個數字(1-100)：\n");
	for (int i = 0; i < 6; i++) {
		arr[i] = rand() % 100 + 1;
		printf("%d ", arr[i]);
	}

	bubbleSort(arr, 6);

	printf("\n六個數字小到大的排序：\n");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}