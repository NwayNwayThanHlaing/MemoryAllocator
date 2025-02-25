#include <stdio.h> 
int a = -1234;
unsigned int b = -1234;
void printValue() {
	printf("a=%e\n", (float) a); 
	printf("a=%u\n", a); 
	printf("a=%d\n", a); 
	printf("b=%u\n", b); 
}

int main() { 
	printValue();
}