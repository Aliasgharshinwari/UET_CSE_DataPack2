#include<iostream>
using namespace std;

class student
{
    public:
        int eventNo;

};


int main()
{
    int n = 0, counter = 0;

    cout<<"Enter number of students";
    cin>>n;
    student students[n];

    while(counter < n)
    {
        cout<<"Enter student "<<counter<<" ticket number"<<endl;
        cin>>students[counter].eventNo;


        if(students[counter].eventNo == -1)
            break;

        counter++;
    }

    for(int i =0; i<n; i++){
        cout<<"Student "<<i<<" has event number ="<<students[i].eventNo<<endl;
    }
    return 0;
}
