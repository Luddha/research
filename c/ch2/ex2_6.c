#include <stdio.h>
#include <stdlib.h>

void printbits(unsigned x){
	int size = sizeof(x) * 8;
	unsigned m = 1;
	int c = 0;
	while (c++ < size){
		if (((x >> size-c) & m))
			putchar('1');
		else
			putchar('0');
	}
	putchar('\n');

}

unsigned int setbits(unsigned x, int p, int n, unsigned y){
	return x & (( ~(~(~0 << n) << (p+1-n))  ) | (y << (p+1-n)));
}


int main(int argc, char **argv){

	if (argc < 3){
		printf("two arguments\n");
		return 0;
	}
	unsigned x = atoi(argv[1]);
	unsigned y = atoi(argv[2]);

	printbits(x);

	x = setbits(x, 4, 3, y);
	printbits(x);

}
