#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define BUSY '+'
#define FREE '_'
#define BUSYSIZE -1
#define FREESIZE 0

struct space {
        char *memory;
        int *sizes;
        int len;
};

void printMemory(struct space *mem) {
        int i = 0;
        while (i < mem->len) {
		printf("%c", *(mem->memory + i));
                i = i + 1;
        }
	printf("\n");
}

void printSizes(struct space *mem) {
        int i = 0;
        int c;
	while (i < mem->len) {
                int n = *(mem->sizes + i);
                int t = 10000;
                while (n > 9) {
                        c = n/t;
                        n = n - c * t;
                        t = t / 10;
                        if (c) {
                        	c =  c % 10 + '0';
				printf("%c", c);
                                i = i + 1;
                        }
                }
		c =  n % 10 + '0';
		printf("%c", c);
                i = i + 1;
        }
	printf("\n");

}

void copyString(char *sIn, char *sOut, int len) {
        int t = 0;
        while (t < len) {
                *(sOut + t) = *(sIn + t);
                t = t + 1;
        }
}

void copyArray(int *old, int *new, int len) {
        int t = 0;
        while (t < len) {
                *(new + t) = *(old + t);
                t = t + 1;
        }
}

int stringLen(char *s) {
        int t = 0;
        while (*(s + t) != '\0')
                t++;
        return t;
}

void initializeMemory(int len, struct space *mem){
        mem->memory = (char*)malloc(len * sizeof(char));
        mem->sizes = (int*)malloc(len * sizeof(int));
        mem->len = len;

        int i = 0;
        while (i < mem->len) {
                mem->memory[i] = FREE;
                mem->sizes[i] = FREESIZE;
                i++;
        }

        printMemory(mem);
        printSizes(mem);
}

void cleanMemory(struct space *mem) {
        int i = 0;
        while (i < mem->len) {
                mem->memory[i] = FREE;
                mem->sizes[i] = FREESIZE;
                i++;
        }

        printMemory(mem);
        printSizes(mem);

        free(mem->memory);
        free(mem->sizes);
}

int stackAllocator(int nbytes, struct space *mem) {
        int t0 = 0;
        while (t0 + nbytes <= mem->len && mem->sizes[t0]!=FREESIZE) {
                t0++;
        }
        if(t0 + nbytes > mem->len){
                return mem->len;
        }
        int t = 0;
        while (t<nbytes && t0+t < mem->len){
                mem->memory[t0+t] = BUSY;
                mem->sizes[t0+t] = BUSYSIZE;
                t++;
        }
        mem->sizes[t0] = nbytes;
        return t0;
}

void deallocator(int t0, struct space *mem) {
        if (t0 == mem->len || t0 < 0)
                return;
        int nbytes = mem->sizes[t0];
        int t = 0;
        while (t<nbytes) {
                mem->memory[t0+t] = FREE;
                mem->sizes[t0+t] = FREESIZE;
                t++;
        }
}

int spaceScanner(int nbytes, struct space *mem) {
        int t0 = 0;
        int s = 0;
        while (s==0 && t0<mem->len){
                int t = 0;
                while (t0+t < mem->len && mem->sizes[t0+t] == FREESIZE){
                        t++;
                }
                if(t>=nbytes)
                        s = 1;
                else
                        t0++;
        }
        return t0;
}

int heapAllocatorQ3(int nbytes, struct space *mem) {
        int t0 = spaceScanner(nbytes, mem);

        if(t0 == mem->len)
                return t0;
        int t = 0;
        while(t<nbytes){
                mem->memory[t0+t] = BUSY;
                mem->sizes[t0+t] = BUSYSIZE;
                t++;
        }
        mem->sizes[t0] = nbytes;
        return t0;
}

void increaseMemory(int nbytes, struct space *mem) {
        int t = mem->len;
        while(t-mem->len < nbytes){
                t = 2*(t+1);
        }
        char* s = mem->memory;
        int* a = mem->sizes;
        int l = mem->len;

        initializeMemory(t,mem);
        copyString(s, mem->memory, l);
        copyArray(a, mem->sizes, l);

        free(s);
        free(a);
}

int heapAllocator(int nbytes, struct space *mem){
        int t0 = spaceScanner(nbytes, mem);
        while(t0 == mem->len){
                increaseMemory(nbytes, mem);
                t0 = spaceScanner(nbytes, mem);
        }
        int t = 0;
        while(t<nbytes){
                mem->memory[t0+t] = BUSY;
                mem->sizes[t0+t] = BUSYSIZE;
                t++;
        }
        mem->sizes[t0] = nbytes;
        return t0;
}


int readString(char **s){
        int t = 0;
        char c = getchar();
        *s = (char*)malloc(1);
        **s = '\0';
        while(c!='\n' && c!=EOF){
                char* p = *s;
                t++;
                *s = (char*)malloc(t+1);
                copyString(p, *s, t);
                free(p);
                (*s)[t-1] = c;
                (*s)[t] = '\0';
                c = getchar();
        }
        if(c == EOF)
                return 0;
        return 1;
}

