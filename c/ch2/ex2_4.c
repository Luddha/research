#include <stdio.h>

void squeeze(char *s1, char *s2){
	int i,j,z,f;

	for (i = j = 0; s1[i] != '\0'; i++){
		f=0;
		for (z = 0; s2[z] != '\0' && f!=1; z++){
			if (s1[i] == s2[z]){
				f=1;		
			}
		}
		if (!f)
			s1[j++] = s1[i];
	}
	s1[j] = '\0';

}

int main(){
	char s1[] = "hello there";
	char s2[] = "ot";

	squeeze(s1, s2);
	printf("%s\n", s1);


}
