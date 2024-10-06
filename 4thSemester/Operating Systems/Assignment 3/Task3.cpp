#include <iostream>
#include <pthread.h>

using namespace std;

// Function executed by each thread
void* printInfo(void* arg) {
    // Extract the thread number from the argument
    int threadNum = *(int*)arg;

    // Print the information
    std::cout << "Name: Your Name" << std::endl;
    std::cout << "Registration Number: Your Registration Number" << std::endl;
    std::cout << "Number of Threads: " << threadNum << std::endl;

    // Terminate the thread
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[5];
    int ret;

    for (int i = 0; i < 5; ++i) {

        int* threadArg = (int *)malloc(sizeof(int));  // Thread number starting from 1
        *threadArg = i;
        ret = pthread_create(&threads[i], NULL, printInfo, (void*)threadArg);

        if (ret) {
            std::cout << "Thread Creation Failed" << std::endl;
            return 1;
        }
    }

    // Wait for all threads to complete
    for (int i = 0; i < 5; ++i) {
        pthread_join(threads[i], NULL);
    }

    return 0;
}
