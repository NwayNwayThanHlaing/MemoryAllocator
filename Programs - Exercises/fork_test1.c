#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv){
	printf("Parent process running..\n");
	int i=0;
	int pid=fork();
	if(pid == 0){
		printf("Child executing..\n");
		i=3;
	}
	else{
		printf("Still the parent..\n");
		i=4;
	}
	printf("The value of i is %d\n", i);

}