#include<stdio.h>

#include<stdlib.h>

#include<unistd.h>

#include<sys/wait.h>



int main(int argc, char *argv[]){



	int pid=fork();



	if(pid == 0){

		printf("In child process\n");

		execlp("./t1.o","t1.o", argv[1], argv[2],argv[3], NULL);

	}



	else if(pid > 0){

    	int r = wait(NULL);

    	printf("Child process terminated\n");

    }



	return 0;

}
