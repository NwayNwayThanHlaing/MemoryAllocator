#include <stdio.h>
#define N 10
int main(){
	int i=0;
	int sum = 0;
	while (i < N){
		if (i % 2 == 0){
			sum = sum + i+1;
			printf("%d + ", i+1);
		}
		i++;
	}
	// sum = sum + i+1;
	printf("%d = %d\n", i, sum);
}
