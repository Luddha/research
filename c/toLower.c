#include <stdio.h>

int toLower(int c){
	return c | 0x20;
}


int main(int argc, char **argv){
	
	int i;

	for (i = 1; i < argc; i++){
		printf("%c\n", toLower(argv[i][0]));
	}

}
