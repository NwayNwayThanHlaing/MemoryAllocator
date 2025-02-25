#include <stdio.h>
int main(){
	char *sa[3];
	sa[0] = "one";
	sa[1] = "two";
	sa[2] = "three";
	int *pa[3];
	int a[3];
	for(int i=0;i<3;i++) a[i] = i+1;
	for(int i=0;i<3;i++) pa[i] = &a[i];
	for(int i=0; i<3; i++){
		printf("sa[%d] = %s\n", i, *(sa+i));
		printf("a[%d] = %d\n", i, *(a+i));
		printf("pa[%d] = %p\n", i, *(pa+i));
		printf("pa[%d] = %d\n", i, **(pa+i));
			
	}

}