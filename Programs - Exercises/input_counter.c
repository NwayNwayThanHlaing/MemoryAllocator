#include <stdio.h>

int main(void) {
    // printf("Enter characters (terminate with ' #'):\n");
    char input;
    int counter = 0;

    while (1) {
        input = getchar();
        // arr[counter] = input; // Print the input character
        counter++;

        if (input == ' ') {
            counter = counter+0;
        }

        if (input == '#') {
            printf("--> total number of input characters = %d\n", counter - 1);
            break;
        }
        putchar(input);
    }


    return 0;
}
