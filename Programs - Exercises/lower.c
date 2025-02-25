#include <stdio.h>

int lower(int c){
	if(c>='A' && c<='Z')
		return c-'A'+'a';
	else
		return c;
}

int upper(int c){
	if(c>='a' && c<='z')
		return c - 'a' + 'A';
	else
		return c;
}

int main(){
	char c;
	while((c=getchar())!= EOF){
		putchar(lower(c));
	}
	
}