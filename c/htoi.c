#include <stdio.h>
#include <ctype.h>

int htoi(char *s){

	int n = 0;
	int i;
	int lim = sizeof(s);

	for (i = 2; i < lim-1; ++i){
		if (isdigit(s[i]))
			n = 16 * n + (s[i] - '0');
		else if ((s[i] | 0x20) >= 'a' && (s[i] | 0x20) <= 'f'){
			n = 16 * n + (((s[i] & 0xf) - 1) + 10);
		}

	}
	return n;
}

int main(int argc, char **argv){

	printf("%d\n", htoi(argv[1]));
}
