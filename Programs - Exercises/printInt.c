#include <stdio.h>
int a=2;
float b=3.1421;
int c=5;
void printValue(void){
	printf("a=%e\n", (float)a);		// %e changes the value in exponential version.
	printf("b=%.2f\n", b);			// float value with two decimal points.
	printf("c=%d\n", c);			// integer value
}

int main(void){
	c=9;				// global variable which can be changed from anywhere in the program.
	printValue();
}
