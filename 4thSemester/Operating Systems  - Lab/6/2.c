#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() {

 	int ARR[10] = {1, 2, 32, 2, 3, 1, 3, 43, 10, 21 };
    int max = ARR[0];

    for(int i=0; i<10; i++){
    	if(max < ARR[i])
    		max = ARR[i];
    }

    printf("Maximum is:%d\n", max);
    return 0;
}
