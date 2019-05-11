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

unsigned rightrot(unsigned x, int n){
	return (x>>n ) | ( ( ~( ~0 << n) & x ) << ((sizeof(x)*8)-n));
	
}


int main(int argc, char **argv){

	if (argc < 2){
		printf("1 arguments\n");
		return 0;
	}
	unsigned x = atoi(argv[1]);

	printbits(x);

	x = rightrot(x,3);
	printbits(x);
	printf("%d\n", x);

}
