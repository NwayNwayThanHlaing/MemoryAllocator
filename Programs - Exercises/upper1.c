#include <stdio.h>
#include <string.h>
int main() {
    char input;
    char uppercaseInput[256]; // Assuming a maximum of 256 characters
    int count = 0;
    char str[]="\\x00";
    // printf("%s\n", str);
    // printf("Enter a string: ");

    while (1) {
        input = getchar();

        if (input == '\n') {
            break;
        }

        if (input >= 'a' && input <= 'z') {
            uppercaseInput[count] = input - ('a' - 'A');
        } else {
            strcat(uppercaseInput, str);
            count = count+3;
        }
        count++;
    }

    uppercaseInput[count] = '\0';
    printf("%s\n", uppercaseInput);

    return 0;
}


/*
#include <stdio.h>

int main() {
    char input;

    printf("Enter a character: ");
    
    while ((input = getchar()) != '\n') {
        if (input >= 'a' && input <= 'z') {
            // If the input is a lowercase letter, convert it to uppercase
            char uppercase = input - 'a' + 'A';
            printf("Uppercase equivalent: %c\n", uppercase);
        }
        // Consume any remaining characters in the input buffer
        while (getchar() != '\n');  // Clear the input buffer until '\n'
    }

    return 0;
}
*/