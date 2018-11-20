#include <iostream>
#include "sorting.h"

using namespace std;


void show_array(int max, int arr[]) {
	for (int i = 0; i < max; i++)
		cout << arr[i] << endl;
}

void insert_array(int index, int max, int arr[], int val){
	for (int i=max-1; i > index; i--) 
		arr[i] = arr[i-1];
	arr[index] = val;	
}


int main() {
	int const N = 5;
	int k;
	int j;
	int input;
	int elements[N] = {0, 0, 0, 0, 0};

	cout << "kth largest: ";
	cin >> k;
	while (k > N || k <= 0) {
		cout << "less than " << N << ": ";
		cin >> k;
	}

	for (int i=0; i < k; i++)
		cin >> elements[i];


	bubble_sort(N, elements, 0);


	for (int i=k; i < N; i++){
		cin >> input;
		for (j = k-1; j >= 0; j--){
			if (elements[j] > input)
				break;	
		}
		insert_array(j+1, k, elements, input);
	}
	


	cout << "The " << k << "th largest value : " << elements[k-1] << endl;


	return 0;
};
