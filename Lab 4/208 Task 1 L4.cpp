#include<bits/stdc++.h>
#define lli long long int
using namespace std;

class BankAccount{
private:
    int acc;
    string name;
    string atype;
    double balance;
    double minbalance;

public:
    BankAccount(int no,string n,string t, double b,double mb): acc(no),name(n),atype(t),balance(b),minbalance(mb)
    {
    }
    void show_info()
    {
        cout<<"Account number: "<<acc<<endl;
        cout<<"Account holder's name: "<<name<<endl;
        cout<<"Account type: "<<atype<<endl;
        cout<<"Current Balance: "<<balance<<endl;
        cout<<"Minimum Balance: "<<minbalance<<endl;
    }
    void showBalance()
    {
        cout<<"The current balance is: "<<balance<<endl;
    }
    void deposit()
    {
        int dep;
        cout<<"Enter the amout to deposit: ";
        cin>>dep;
        balance+=dep;
    }
    void withdraw()
    {
        int wtd;
        cout<<"Enter amount to withdraw: ";
        cin>>wtd;
        if(balance-wtd < minbalance)
        {
            cout<<"Not enough funds to withdraw"<<endl;
        }
        else balance-=wtd;
    }
    void giveInterst(double interest=3)
    {
        balance+=((interest/100)*balance);
        balance-=(0.1*balance);
    }
    ~BankAccount()
    {
        cout<<"Account of "<<name<<" with account no "<<acc<<" is destroyed with a balance BDT "<<balance<<endl;
    }


};

int main()
{
    BankAccount ba(1234,"Mr. X","Savings",5000,500);
    ba.show_info();
    ba.deposit();
    ba.showBalance();
    ba.withdraw();
    ba.giveInterst(7);
    ba.showBalance();


}
