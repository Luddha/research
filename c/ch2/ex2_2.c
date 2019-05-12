#include <stdio.h>

int main(int argc, char **argv){
	// for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
	// 	s[i] = c;
	
	int i = 0;
	char c;
	char s[20];
	int lim = sizeof(s);

	while (i < lim-1){
		c = getchar();
		
		if (c == '\n')
			break;
		if (c == EOF)
			break;
		s[i++] = c;
	}	
	s[i] = '\0';
	
	printf("%s\n", s);
	

}
