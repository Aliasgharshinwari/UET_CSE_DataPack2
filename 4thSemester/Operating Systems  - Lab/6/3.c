#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() {

    int pid,n;
   	printf("Enter n");
   	scanf("%d", &n);e
   	printf("Parent Process With ID:%d\n", getpid());

   	for(int i = 1; i<=n; i++){
    	pid = fork();
        if(pid == 0 ){
    		printf("Child %d With ID:%d and Parent ID:%d\n",i, getpid(), getppid());
    		break;
    	}
	}

	if(pid > 0){
   		for(int i=0; i<n; i++)
   			int r = wait(NULL);
   	}
    return 0;

}

