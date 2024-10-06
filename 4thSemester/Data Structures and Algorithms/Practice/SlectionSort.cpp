#include<iostream>
using namespace std;
void selection_sort(int a[], int n){

	int last = n -1;
    int index_of_largest = 0;
	for(int i = 0; i < n; i++){
            if(a[i] > a[index_of_largest]){
                swap(a[i], a[last]);
                last--;
            }
        }
	}

void print(int arr[],int size){
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main(){
		int arr[5]={2,56,3,45,4};
		int n=sizeof(arr)/sizeof(arr[0]);
		selection_sort(arr,n);
		print(arr,n);
}
