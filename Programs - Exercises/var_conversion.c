#include <stdio.h> 
int main(void) {
	int a = 128;
	char c;
	c = a;
	printf("c=%c\n",c);
	a = c; 
	printf("a=%d\n", a);
}
