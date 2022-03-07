#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 2000
void mirror(char *s)
{
	int i, len;
	char aux;

	len = strlen(s);

	for (i = 0; i < len/2; i++) {
		aux = *(s+i);
		*(s+i) = *(s+len-1 - i);
		*(s+len-1 - i) = aux;
	}
}

int main()
{
	char *str;
	str = calloc(MAX_SIZE, sizeof(char));
	fgets(str, MAX_SIZE, stdin);
	mirror(str);
	printf("%s\n",str);
	free(str);
	return 0;
}

