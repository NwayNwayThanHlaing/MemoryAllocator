#include <stdio.h>
#include <string.h>
int upperCase(int c){
        if (c >= 'a' && c <= 'z')
                c = c - ('a' - 'A');
        else
                c = '\0';
        return c;
}

int main() {
    char input;
    char uppercaseInput[256]; // Assuming a maximum of 256 characters
    int temp = 0;

    while (1) {
        input = getchar();
        if (input == '\n') {
            break;
        }
        if (input == '\0'){
            uppercaseInput[temp] = '\0';
        }
        else{
            uppercaseInput[temp] = upperCase(input);
        }

        temp++;
    }  

    printf("%s\n", uppercaseInput);

    return 0;
}


