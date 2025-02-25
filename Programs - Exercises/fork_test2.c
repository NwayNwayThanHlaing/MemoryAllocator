#include <stdio.h>
int upperCase(int c){
        if (c >= 'a' && c <= 'z')
                c = c - ('a' - 'A');
        else
                c = '\0';
            
        return c;
}

int main(void){
    int c = getchar();
    while(c!= '\n'){
        upperCase(c);
    }
}
