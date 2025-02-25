#include <stdio.h>

int valueOfDigit() {
    char c;
    int i;
    c = getchar();

    if (c >= '0' && c <= '9') {
        i = c - '0'; // Convert the character to an integer
        printf("%o\n", i); // Print the integer as an octal number
    } else {
        printf("the input is not a digit\n");
    }
    return 0;
}
int main(void) {
    // printf("Enter a character: ");
    valueOfDigit();
    return 0;
}
