#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* delete_first(char *s, char *pattern) {
	int leng_s, leng_p, ap;

	leng_s = strlen(s);
	leng_p = strlen(pattern);
	
	for (int i = 0; s[i]; i++) {
		ap = 0;
		while (s[ap + i] && pattern[ap] && s[ap + i] == pattern[ap]) {
			ap++;
		}
		if (ap == leng_p) {
			strcpy(s + i, s + leng_p + i);
			break;
		}
	}
	return s;
}

int main(){
	char s[20] = "Ana are mere";
	char *pattern = "re";

	// Decomentati linia dupa ce ati implementat functia delete_first.
	printf("%s\n", delete_first(s, pattern));

	return 0;
}
