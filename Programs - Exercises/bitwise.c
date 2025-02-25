#include <stdio.h>
int main() {
	int i = 077;
	printf("i=%o\n", i);
	printf("~i=%o\n", ~i);
	printf("(i&i)=%o\n", i & i);
	printf("(i&~i)=%o\n", i & ~i);
	printf("(i | i)=%o\n", i | i);
	printf("(i | ~i)=%o\n", i | ~i);
	printf("i<<1=%o\n", i<<1);
	printf("i<<8=%o\n", i<<8);
	printf("i>>1=%o\n", i>>1);
	printf("i>>8=%o\n", i>>8);
}