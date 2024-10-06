#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() {
    int pid;
    printf("Before fork\n");
    pid = fork();

    if(pid == 0){
    	printf("In child process\n");
    	execlp("/usr/bin/ls", "ls", "-l", NULL);
    }

    else if(pid > 0){
    	int r = wait(NULL);
    }
    return 0;
}

