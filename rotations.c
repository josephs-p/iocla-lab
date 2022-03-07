#include <stdio.h>

void rotate_left(int *number, int bits)
{
	int nn, rest;
	nn = number;
	nn = nn << bits;
	number = ((nn >> bits) ^ number) << bits + nn;
 
}

void rotate_right(int *number, int bits)
{
	/* TODO */
	(void) number;
	(void) bits;
}

int main()
{
	int n, b;
	scanf("%d%d",&n,&b);
	rotate_left(n, b);
	printf("left : %d\n",n);
	return 0;
}

