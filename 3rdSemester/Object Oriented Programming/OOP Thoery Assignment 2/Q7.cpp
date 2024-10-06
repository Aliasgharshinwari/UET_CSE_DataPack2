 #include <iostream>
using namespace std;

void sort4(int *a,int *b,int *c, int *d)
{
    for(int i=0;i<4;i++)
    {
       if(*a>*b)
       {
        int temp=*a;
        *a=*b;
        *b=temp;
       }
       if (*b>*c)
       {
        int temp=*b;
        *b=*c;
        *c=temp;
       }
       if (*c>*d)
       {
        int temp=*c;
        *c=*d;
        *d=temp;
       }
    }

}

int main()
{
    int a=8,b=3,c=6,d=11;
    sort4(&a,&b,&c,&d);
    cout<<a<<b<<c<<d;

	return 0;
}
