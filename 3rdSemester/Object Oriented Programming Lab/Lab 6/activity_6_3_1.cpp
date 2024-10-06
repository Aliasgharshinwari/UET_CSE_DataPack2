#include <iostream>
using namespace std;

class First{
    protected:
        int f;
    public:
        f_input(){
            cin>>f;
        }
};

class Second: public First{
    protected:
        int s;
    public:
        s_input(){
            f_input();
            cin>>s;
        }
};

class Third: public Second{
    protected:
        int t;
    public:
        t_input(){
            cin>>t;
        }
        void find_max(){
            if(f>s){
                if(f>t)
                    cout<<"Max: "<<f<<endl;
            }
            else if (s>f){
                    if(s>t)
                        cout<<"Max: "<<s<<endl;
                }
        else if (t>f){
                if(t>s)
                    cout<<"Max: "<<t<<endl;
            }
        }

        void show(){
            cout<<"f: "<<f<<endl;
            cout<<"s: "<<s<<endl;
            cout<<"t: "<<t<<endl;
        }
};

int main()
{
    Third t1;
    t1.t_input();
    t1.show();
    t1.find_max();
    return 0;
}
