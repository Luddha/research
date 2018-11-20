#pragma once

void bubble_sort(int arr_size, int arr[], bool asc=1) {
	int tmp;
	bool swap = 1;
	while (swap) {
		swap = 0;
		for (int i = 0; i < arr_size; i++) {
			if (i + 1 != arr_size) {
				if (asc) {
					if (arr[i] > arr[i + 1]) {
						tmp = arr[i + 1];
						arr[i + 1] = arr[i];
						arr[i] = tmp;
						swap = 1;
					}
				}
				else {
					if (arr[i] < arr[i + 1]) {
						tmp = arr[i + 1];
						arr[i + 1] = arr[i];
						arr[i] = tmp;
						swap = 1;
					}
				}
			}
		}
	}
}

// binary search algorithm