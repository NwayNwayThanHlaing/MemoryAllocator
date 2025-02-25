#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	// if(!fork()){
	// 	printf("the PID of the child is %d\n", getpid());
	// }
	// else{
	// 	printf("The return value of wait (null) is %d\n", wait(NULL));
	// 	printf("The PID of the parent is %d\n", getpid());
	// }
	fork();
	fork();
	// fork();
	
	printf("Hello!");
	return 0;
}