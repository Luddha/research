#include <stdio.h>

int any(char *s1, char *s2){
	int i,j;

	for (i = 0; s1[i] != '\0'; i++){
		j=0;
		while (s2[j] != '\0'){
			if (s1[i] == s2[j++])
				return i;

		}
	}
	return -1;

}

int main(int argc, char **argv){

	if (argc < 2){
		printf("two arguments\n");
		return 0;
	}
	printf("%d\n", any(argv[1], argv[2]));


}
