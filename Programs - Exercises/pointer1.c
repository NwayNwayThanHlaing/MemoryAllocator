#include <stdio.h>

void f(int *p, int j){
	p = &j;
}
 
int main(void){
	int i;
	int k =10;
	printf("The address of i is %p\n", (void *)&i);
	int *pi;

	pi = &i;
	printf("The value of pi: %p\n", (void *)pi);
	printf("The index of pi: %d\n", *pi);
	printf("The address of pi: %p\n", (void *)&pi);

	i = 0;
	printf("i is %d\n", *pi);

	i = i+1;
	*pi = *pi+1;
	printf("i is %d\n", *pi);
	
	pi = &k;
	*pi = *pi+1;
	f(pi,k);
	printf("i is %d\n", i);
	printf("k is %d\n", k);

	int a[10];
	// int *pa = &a[0];
	int *pa = a;
	for(int i=0; i<10; i++){
		a[i] = i;
		*(a+i) = i;
		*(pa+i) = i;
	}

	a[9] = 1234;
	for(int i=0; i<100; i++){
		printf("a[%d]=%d\n", i,a[i]);
		printf("a[%d]=%d\n", i,*(a+i));	
		printf("a[%d]=%d\n", i,*(pa+i));	
	}

	char sa[20] = "hello world";
	char *s = "hi world";
	printf("sa=%s\n",sa);
	printf("s=%s\n",s);
	char c = '\0';
	printf("sa[11]= ->%c<-\n",*(sa+11));
	printf("s[8]= ->%c<-\n",*(s+8));
	printf("c= ->%c<-\n",c);

	sa[5] = '\0';
	printf("sa=%s\n",sa);
	//s[3] = '\0'; forbidden

	s = sa;
	// sa = s; forbidden 
}








