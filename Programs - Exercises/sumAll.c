#include <stdio.h>

int sumAll(int MAX){
        char arr[MAX];
        char c;
        int sum = 0;
        int len = 0;
        while((c = getchar()) != 0 && len < MAX-1){
                arr[len] = c;
                len++;
        }
        arr[len] = '\0';

        int i = 0, n=0;
        while (i < len){
                c = *(arr + i);
                if((c -'0')<= 9 && (c - '0')>=0)
                        n = n + 1;
                i++;
        }
        return n;
}

int main(){
        printf("%d\n", sumAll(4));
}