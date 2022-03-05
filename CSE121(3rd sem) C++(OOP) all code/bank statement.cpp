#include<iostream>
using namespace std;

class account{
    int ac_no;
    double balance,deposit,withdraw;
    string ac_name;

public:

    void set()
    {
        double a,b,c,d;
        string n;
        cout<<"Enter AC no, Balance, Deposit amount, Withdraw amount, AC Name: "<<endl;
        cin >>a>>b>>c>>d>>n;

        ac_no = a;
        balance = b;
        deposit = c;
        withdraw = d;
        ac_name = n;

    }

    double amount()
    {
        balance = balance + deposit;
        balance = balance - withdraw;

        return balance;
    }

    void show()
    {
        cout<<"Account Name : "<<ac_name<<endl<<"Account Number : "<<ac_no<<endl<<"Recent Total Balance : "<<balance<<endl;
    }
};

int main()
{
    account ob1;

    ob1.set();
    ob1.amount();
    ob1.show();

    return 0;

}

