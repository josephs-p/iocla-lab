#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10000
int my_strlen(const char *str)
{
	int len = 0;
	while (*(str+len)) {
		++len;
	}
	return len-1;
}

void equality_check(const char *str)
{
	int i, len;
	len = my_strlen(str);
	for ( i = 0; i < len; i++) {
		if ( ! (*(str+i) ^ *(str+ ((i+(1<<(i)))%len))) )
			printf("Address of %c: %p\n", *(str+i), (str+i));
	}
}

int main(void)
{
	/* TODO: Test functions */
	char *s1;
	s1= calloc(SIZE, sizeof(char));
	fgets(s1, SIZE, stdin);
	printf("length = %d\n", my_strlen(s1));
	equality_check(s1);
	return 0;
}

