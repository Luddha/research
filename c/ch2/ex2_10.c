#include <stdio.h>

int lower(int c){

	return (c >= 'A' && c <= 'Z') ? (c +0x20 ) : c;

}


int main(int argc, char **argv){

	if (argc < 2){
		printf("one argument\n");
		return 0;
	}

	printf("%c\n", lower(argv[1][0]));


}
