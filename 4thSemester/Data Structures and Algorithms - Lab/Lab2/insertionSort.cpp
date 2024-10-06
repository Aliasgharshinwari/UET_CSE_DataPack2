#include<iostream>
using namespace std;
void insertion_sort(int a[], int n){
	for(int i=1;i<n;i++){
		int temp=a[i];
		int j=i-1;
		//change
	while(j>=0 && a[j]>temp){
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=temp;
}
}
void print(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" "; 
	}
}
int main(){
		int arr[5]={2,56,3,45,4};
		int n=sizeof(arr)/sizeof(arr[0]);
		insertion_sort(arr,n);
		print(arr,n);
}
