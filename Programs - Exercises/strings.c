#include <stdio.h>
int main(){
	char*s = "string constant";
	char as[] = "string constant";
	printf("%s\n", &s[7]);
	printf("%s\n", &as[7]);
	printf("%s\n", s + 7);
	printf("%s\n", as + 7);
}
