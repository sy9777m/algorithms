#include <iostream>
#include "p1_solution.h"

int main(void)

{
	int arr[5] = {1, 2, 3, 4, 5};
	int arr2[5] = {1, 2, 3, 4, 5};
	int len = 5;

	insertion_sort (arr, len);
	bubble_sort (arr2, len);

	return 0;
}
