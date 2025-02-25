#include <stdio.h>

int main(void){
	char c;
	printf("Enter a character: ");
	
	// program keeps going until you type q
	while((c = getchar())!='q'){
		putchar(c);
	}
	printf("c = %c\n", c);
}