#include <stdio.h>

/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main() {
    int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
    (void) v;
    int *p = v;
    short int *q = v;
    char *s = v;
    
    printf("Din 1 in 1:\n");
    while(*s) {
    	printf("%p -> 0x%x\n",s,*s);
    	++s;
    }
    
    printf("Din 2 in 2:\n");
    while(*q) {
    	printf("%p -> 0x%x\n",q, *q);
    	++q;
    }
    
    printf("Din 4 in 4:\n");
    while(*p) {
    	printf("%p -> 0x%x\n", p, *p);
	++p;
    }
    return 0;
}
