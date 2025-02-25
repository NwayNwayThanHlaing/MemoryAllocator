#include <stdio.h>
int main(){
	printf("character: %lu\n", sizeof(char));
	printf("integer: %lu\n", sizeof(int));
	printf("float: %lu\n", sizeof(float));
	printf("double: %lu\n", sizeof(double));

	int vInt[10];
	char vChar[10];
	double vDouble[10];

	printf("Array of int: %lu\n", sizeof(vInt));
	printf("Array of char: %lu\n", sizeof(vChar));
	printf("Array of double: %lu\n", sizeof(vDouble));
	printf("--------------------------\n");


}