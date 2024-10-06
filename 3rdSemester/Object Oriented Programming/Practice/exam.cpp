#include<iostream>
#include<string>
#include<string.h>
#include<cstring>
#define line cout<<endl;// for endl
using namespace std;

class Medicine{

    private:
    char *Med_Name, *Ch_Formula, *Med_Type, *Manfacture_Name, *Expiry_Date;
    int quantity;

    public:

    // No Argument Constructor
    Medicine():Med_Name(""),Ch_Formula(""),Manfacture_Name(""),Expiry_Date(""),quantity(0),Med_Type(""){}

    // Constructor with Arguments
    Medicine(char Name[], char Formula[], char Man_Name[], char Ex_Date[], char mtype[], int q):Med_Name(Name),Ch_Formula(Formula),Manfacture_Name(Man_Name),Expiry_Date(Ex_Date),quantity(q),Med_Type(mtype){}

    // Copy Constructor (Deep)
    Medicine(const Medicine &s){

        // For Medicine Name
        int MNlen = strlen(s.Med_Name);
        Med_Name = new char[MNlen + 1];
        strcpy(Med_Name,s.Med_Name);

        // For Chemical Formula
        int CH_len = strlen(s.Ch_Formula);
        Ch_Formula = new char[CH_len + 1];
        strcpy(Ch_Formula,s.Ch_Formula);

        // For Manfacture Name
        int Mname_len = strlen(s.Manfacture_Name);
        Manfacture_Name = new char[Mname_len + 1];
        strcpy(Manfacture_Name,s.Manfacture_Name);

        // For Medicine Type
        int Mtlen = strlen(s.Med_Type);
        Med_Type = new char[Mtlen + 1];
        strcpy(Med_Type,s.Med_Type);
        

        // For Expiry Date
        int Ex_Date_len = strlen(s.Expiry_Date);
        Expiry_Date = new char[Ex_Date_len + 1];
        strcpy(Expiry_Date,s.Expiry_Date);

        quantity=s.quantity;
        
    }

    void input(){
        line
        char Medname[100],Chform[100], Medt[100], Manname[100], Exd[100];

        cout<<"Enter Name : ";
        cin.getline(Medname,100);
        int a = strlen(Medname);
        Med_Name = new char [a];
        strcpy(Med_Name,Medname);
        line 

        cout<<"Enter Chemical Formula : ";
        cin.getline(Chform,100);
        int b = strlen(Chform);
        Ch_Formula = new char [b];
        strcpy(Ch_Formula,Chform);
        line 

        again:
        cout<<"Enter Medicien Type : ";
        cin.getline(Medt,100);
        if(Medt == "tablet" || Medt == "Tablet" || Medt == "Syrup" || Medt == "syrup"|| Medt == "inj"|| Medt == "Inj"){
        int c = strlen(Medt);
        Med_Type = new char [c];
        strcpy(Med_Type,Medt);
        line 
        }
        
        else {
            cout<<"Wrong Type !! Enter Again";line
            goto again;
        }


        cout<<"Enter Manfacture Name : ";
        cin.getline(Manname,100);
        int d = strlen(Manname);
        Manfacture_Name = new char [d];
        strcpy(Manfacture_Name,Manname);
        line 

        cout<<"Enter Expiry Date : ";
        cin.getline(Exd,100);
        int e = strlen(Exd);
        Expiry_Date = new char [e];
        strcpy(Expiry_Date,Exd);
        line 

        cout<<"Enter Quantity : ";
        cin>>quantity;
        line 
    }

    void dispaly(){
        cout<<"Medicine Name = "<<Med_Name; line
        cout<<"Chemical Formula = "<<Ch_Formula; line
        cout<<"Type of Medicine = "<<Med_Type; line
        cout<<"Manafacture Name  = "<<Manfacture_Name;line
        cout<<"Expiry Date = "<<Expiry_Date;line
        cout<<"Quantity = "<<quantity;line
    }

    ~Medicine(){
        delete[] Med_Name;
        delete[] Med_Type;
        delete[] Ch_Formula;
        delete[] Manfacture_Name;
        delete[] Expiry_Date;
    }

};
const int SIZE = 2;
int main(){
    Medicine M[SIZE];
    for(int num =0 ; num<SIZE; num++){
        M[num].input();
    }
    for(int num =0 ; num<SIZE; num++){
        M[num].dispaly();
    }
    return 0;
}