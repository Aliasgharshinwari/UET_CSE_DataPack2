#include<stdio.h>

#include<stdlib.h>

#include<unistd.h>

#include<sys/wait.h>



int main(int argc, char *argv[]){





	for(int i=1; i<argc; i++){

		int pid = fork();



		if(pid == 0){

			printf("In child process\n");

			execlp(argv[i], argv[i], NULL);

		}

	}



	for(int i=1; i<argc; i++){

   			int r = wait(NULL);

   	}



	return 0;

}
