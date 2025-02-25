#include <stdio.h>
static int j=0;
void printInt(int i){
	i++;
	printf("i=%d\n", i);
	j++;
	printf("j=%d\n", j);
}
int main(){
	int i=1;
	printInt(i);
	printInt(i);
}