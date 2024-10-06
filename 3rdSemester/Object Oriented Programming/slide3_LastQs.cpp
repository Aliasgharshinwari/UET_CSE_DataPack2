#include<iostream>
#include<string>
using namespace std;
void add(int arr[],int l)
{
	int ar2[l+1];
	cout<<"The array A is "<<endl;
	for(int i=0;i<l;i++)
	{
		cout<<arr[i]<<endl;
	}
    for(int i=0;i<l+1;i++)
    {
        ar2[i]=arr[i];
        if(i==3)
        {
            ar2[3]=10;
        }
    }
	cout<<"After addition: "<<endl;
	for(int i=0;i<l+1;i++)
	{
		cout<<ar2[i]<<endl;
	}
}
void Union(int array1[],int array2[],int array3[])
{
    int temp[9] = {0};
    int result[9] = {0};

    int counter=0;
    for(int i = 0; i < 3; i++){
        temp[i] = array1[counter];
        counter++;
    }
    counter=0;
    for(int i = 3; i < 6; i++){
        temp[i] = array2[counter];
        counter++;
    }
    counter=0;
    for(int i = 6; i < 9; i++){
        temp[i] = array3[counter];
        counter++;
    }
    //sort temp in ascending order
    for(int i = 0; i < 9; i++){
        for(int j = i+1; j < 9; j++){
            if(temp[i] > temp[j]){
                int temp1 = temp[i];
                temp[i] = temp[j];
                temp[j] = temp1;
            }
        }
    }
    int c1=0;
    for(int i=0; i<9;i++){
        if(temp[i] != temp[i+1]){
            temp[i] = temp[i];
            c1++;
        }else{
            temp[i] = 0;
        }
    }

    //sort temp in descending order
    for(int i = 0; i < 9; i++){
        for(int j = i+1; j < 9; j++){
            if(temp[i] < temp[j]){
                int temp1 = temp[i];
                temp[i] = temp[j];
                temp[j] = temp1;
            }
        }
    }
    for(int i = 0; i < 9; i++){
        result[i] = temp[i];
    }
    //display result
    for(int i = 0; i < c1; i++){
        cout << result[i] << ", ";
    }
}
void list(int arr[],int l)
{
	cout<<"Listed array A is:"<<endl;
	for(int i=0;i<l;i++)
	{
		cout<<arr[i]<<endl;
	}
}
void intsct(int a1[],int a2[],int a3[],int l)
{
    int counter=0;
	int temp[l];
	int result[l] = {0};
	for(int i=0;i<l;i++){//a1 ={2,6,7} a2={1,2,3} a3={1,2,5}
        for(int j=0; j<l; j++){
            if(a1[i]==a2[j]){
                temp[counter] = a1[i];
                counter++;
            }
        }
	}
	counter=0;
	for(int i=0;i<l;i++){
        for(int j=0; j<l; j++){
            if(temp[i]==a3[j]){
                result[counter] = temp[i];
                counter++;
            }
        }
	}
	for(int i=0;i<counter;i++){
        cout<<result[i]<<endl;
        }
}
void rem(int arr[],int l)
{
    cout<<"Array before removing:"<<endl;
    for(int i=0;i<l;i++){
        cout<<arr[i]<<endl;
    }
	int ar2[l-1];
	for(int i=0;i<l;i++)
	{
		ar2[i]=arr[i+1];
		if(arr[i]==1)
		{
			continue;
		}
	}
	cout<<"Array after removing 1 is: "<<endl;
	for(int i=0;i<l;i++)
	{
		if (i==2)
		continue;
		cout<<ar2[i]<<endl;
	}
}
int main()
{
	int len=3;
	int A[len]={1,2,3};
	int B[len]={1,2,5};
	int C[len]={2,6,7};
	int x;
	cout<<"Enter your command:"<<endl;
	cout<<"1 for addition of 10."<<endl;
	cout<<"2 for union of A B C."<<endl;
	cout<<"3 to list A."<<endl;
	cout<<"4 for intersection C A B."<<endl;
	cout<<"5 to remove 1 in B"<<endl;
	cin>>x;
	switch(x){
	case 1:
		add(A,len);
		break;
	case 2:
		Union(A,B,C);
		break;
	case 3:
		list(A,len);
		break;
	case 4:
		intsct(C,A,B,len);
		break;
	case 5:
		rem(B,len);
		break;
	default:
		cout<<"Wrong option chosen"<<endl;
	}
	return 0;
}
