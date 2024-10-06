#include <iostream>
using namespace std;

template<class T1> T1 maximum(T1 a,T1 b, T1 c)
{
    T1 maxim = a;
    if (b > maxim) maxim = b;
    if (c > maxim) maxim = c;
    return maxim;
}

int main()
{
    int i1 = 1, i2 =2, i3 =3;
    double f1 = 1.34, f2 =2.23, f3 =8.43;

    cout<<"int max : "<<maximum(i1,i2,i3)<<endl;
    cout<<"float max : "<<maximum(f1,f2,f3);
    return 0;
}
