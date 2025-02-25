#include <stdio.h>
#define N 9

int main(){
	int i;
	int sum = 0;
	for(i=0; i<N; i = i+2){
		sum += i;
		printf("%d\n", i);
	}
	sum += i;
	printf("last i = %d\nSum = %d\n ", i,sum);
}

// i=2, sum=2
// i=4, sum=6
// i=6, sum=12
// i=8, sum=20
// i=10

// sum=sum+i=30

