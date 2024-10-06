#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{

    int pid,n;
    printf("Enter n");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++)
    {
        pid = fork();

        if(pid >0)
        {
            printf("Process:%d With ID:%d and Parent ID:%d\n",i,getpid(), getppid());
            break;
        }

    }

    if(pid > 0)
    {
        int r = wait(NULL);
    }

    return 0;
}

