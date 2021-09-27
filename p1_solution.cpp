#include "p1_solution.h"
#include <stdio.h>

void insertion_sort (int arr[], int len)
{
	printf("Insertion\n");
	int i = 1;
	for (i; i < len; ++i) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] < key) {
			arr[j + 1] = arr[j];
			--j;	
		}
		arr[j + 1] = key;

		for (int k = 0; k < len; ++k) {
				printf("%d ", arr[k]);
			}
		printf("\n");
	}

}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort (int arr[], int len)
{
	printf("Bubble\n");
	int i = 1;
	for (i; i < len; ++i) {
		for (int j = 1; j < len; ++j) {
			int comp = arr[j];
			int key = arr[j - 1];

			if (key < comp) {
				swap(&arr[j], &arr[j - 1]);
			}

		}
		
		for (int k = 0; k < len; ++k) {
				printf("%d ", arr[k]);
		}
		printf("\n");
	}

}
