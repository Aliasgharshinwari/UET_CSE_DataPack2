#include <stdio.h>
//#include <iostream>
//using namespace std;

int Hash(int k){
    return k%5;
}

int ReHash(){

}

void add(int value, int key, int a[]){

    int index = Hash(key);
    a[index] = value;
}

void Searching(int value, int a[]){

    int index = Hash(key);
    a[index] = value;
}

void print_arr(int n, int a[]){

    for(int i=0; i<n; i++)
        printf(" %d", a[i]);

}

int main() {
    int arr[10];

    add(4,5, arr);

    print_arr(10, arr);
    return 0;
}


