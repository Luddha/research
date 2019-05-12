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

int bitcount(unsigned x){
	int b=0;

	while (x != 0){
		x &= (x-1);
		b++;	
	}

	return b;
}


int main(int argc, char **argv){

	if (argc < 2){
		printf("1 arguments\n");
		return 0;
	}
	unsigned x = atoi(argv[1]);

	printbits(x);
	printf("%d bits found\n", bitcount(x));

}
