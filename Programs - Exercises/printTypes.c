#include <stdio.h>
unsigned int au = 2147483648;
char ac = '*';
float af = 0.123456;

void printValue(){
	printf("au = %u\n", au);
	printf("ac = %c\n", ac);
	printf("af = %f\n", af);
}

int main(){
	printValue();
}