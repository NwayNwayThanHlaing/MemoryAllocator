#include <stdio.h>
int main() {
	char *s = "hello, world\n";
	printf("s=%s", s);
	printf("s[7]=%c\n", s[7]);
	printf("s[100]=%c\n", s[100]);
	printf("&s[7]=%s", &s[7]);
	//s[7] = 'x'; //uncomment this line if you declare s as a char array
}