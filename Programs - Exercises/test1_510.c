#include <stdio.h>

// const static int j=1;	
static int j=1;	
const static int k = 'a';

// const makes the value of j unchangeable!

void printInt(int i){		
	// if function is int, need to give return value!
	// j = j+1; (cuz of 'const', this will be error!)

	i = i+1;
	j = j+1;
	printf("i=%d\t(in function)\n", i);
	printf("j=%d\t(in function)\n", j);
	printf("k=%d\t(in function)\n\n", k);
}

int main(void){
	auto int i=1;			
	// auto is default, destroyed after running! 
	// static keeps it to remain after running!
	i = -1;
	char r;
	printf("size of r: %lu\t(in main)\n", sizeof(r));	
	printf("size of i: %lu\t(in main)\n\n", sizeof(i));	
	// size of char is 1, size of int is 4.
	// %lu - unsigned int or unsigned long

	printInt(i);
	printf("i=%d\t(in main)\n", i);
	printf("i=%u\t(unsigned in main)\n", i);	
	printf("j=%d\t(in main)\n", j);
	// %d - decimal signed int
	// %u - decimal unsigned int(gives 10digits garbage value for neg int)
}

// i in main() and i in function are completely different.
// but for static j, changing it in func will update value everywhere.
