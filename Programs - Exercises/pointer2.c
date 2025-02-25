#include <stdio.h>
int main() {
	int i = 3;
	int a[10];
	for (int j=0;j<10;j++) 
		a[j]= j + 1;
	int*pa,*pai;
	pa = a;
	pai = pa + i;
	printf("a=%p, pa=%p, pai=%p, &a[3]=%p\n",(void*) a, (void*) pa, (void*) pai, (void*) &a[3]);
	printf("*a=%d,*pa=%d,*pai=%d, a[3]=%d\n",*a,*pa,*pai, a[3]);
	
	printf("\n");
	
	printf("*(a + 2)=%d\n",*(a + 2));
	printf("(a + 2)=%p\n", (void*) (a + 2));
}
