#include <stdio.h>
#include <stdlib.h>

int binsearch(int x, int v[], int n){

	int low, high, mid;
	low = 0;
	high = n;

	while (low <= high && x != v[mid]){
		mid = (low+high)/2;
		if (x < v[mid])
			high = mid-1;
		else
			low = mid+1;
	}
	if (x == v[mid])
		return mid;
	return -1;
}

int main(int argc, char **argv){
	
	if (argc < 2){
		printf("one argument\n");
		return 0;
	}

	int v[] = {1, 2, 3, 4, 5};
	int x = atoi(argv[1]);

	int f = binsearch(x, v, 5);

	printf("%d is at v[%d]\n", x, f);

}
