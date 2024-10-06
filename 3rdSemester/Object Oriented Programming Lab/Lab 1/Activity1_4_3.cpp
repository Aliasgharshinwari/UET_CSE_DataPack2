#include <iostream>
using namespace std;

class BankAccount
{

private:
    int balance;

public:
    BankAccount(int init_value)
    {
        balance = init_value;
    }

    void deposit(int value)
    {
        balance += value;
    }

    void withdraw(int value)
    {
        if (balance > 500)
            balance -= value;
        else
            cout<<"Insufficient Balance"<<endl;
        
    }

    void showAmount()
    {
        cout << "Amount = " << balance << endl;
    }
};

int main()
{
    BankAccount b1(1000); //Open Bank Account having Rs. 1000.

    system("cls");
    b1.showAmount();    //Display current balance.
    
    b1.deposit(500);    //Deposit Rs. 500 and display current balance
    b1.showAmount();    //Display current balance.
    
    b1.withdraw(500);    //Withdraw Rs. 500 and display current balance
    b1.showAmount();    //Display current balance.
    
    b1.withdraw(500);    //Withdraw Rs. 500 and display current balance
    b1.showAmount();    //Display current balance.                                 
    
    b1.withdraw(500);    //Withdraw Rs. 500 and display current balance
    b1.showAmount();    //Display current balance.                                 

    system("pause");
    return 0;

}
