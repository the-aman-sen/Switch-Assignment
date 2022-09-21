#include<iostream>
using namespace std;

int main()
{
    int balance=1000, amount, command;

    cout<<endl<<"Enter the choice of command number";
    cout<<endl<<"1.Deposit Money\n2.Withdraw Money\n3.Check Balance\n4.Exit";
    cin>>command;

    switch(command)
    {
        case 1: cout<<"Enter the amount to deposit";
        cin>>amount;
        balance=balance+amount;
        break;

        case 2: cout<<"Enter the amount to withdraw";
        cin>> amount;
        balance=balance-amount;
        break;

        case 3: cout<<"Your account balance is :"<<balance;
        break;

        case 4: cout<<"See  you next time";
        break;

        default: cout<<"Invalid Choice";

    
    }

    cout<<"Final Balance :"<<balance;

    return 0;

}