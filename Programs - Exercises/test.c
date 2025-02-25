#include <stdio.h>

#define N 5
#define ANS 42

void answer(int n){
	int i;
	for(i=n; i>0; i--){
		printf("The answer is %d\n", ANS);
	}
}

//Main
int main(){
	answer(N);
	return 0;
}