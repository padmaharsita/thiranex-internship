#include<iostream>
using namespace std;
class Bank
{
    int account_number;
    char name[30];
    float balance;
public:
    void create()
    {
        cout<<"Enter Account Number: ";
        cin>>account_number;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Balance: ";
        cin>>balance;
    }
    void display()
    {
        cout<<"\nAccount Number: "<<account_number;
        cout<<"\nName: "<<name;
        cout<<"\nBalance: "<<balance<<endl;
    }
    void deposit()
    {
        float amount;
        cout<<"Enter Amount: ";
        cin>>amount;
        balance += amount;
        cout<<"Amount Deposited Successfully\n";
        cout<<"Current Balance: "<<balance<<endl;
    }
    void withdraw()
    {
        float amt;
        cout<<"Enter Amount: ";
        cin>>amt;
        if(amt > balance)
        {
            cout<<"Insufficient Balance\n";
        }
        else
        {
            balance -= amt;

            cout<<"Amount Withdrawn Successfully\n";
            cout<<"Current Balance: "<<balance<<endl;
        }
    }

    void checkBalance()
    {
        cout<<"Current Balance: "<<balance<<endl;
    }
};
int main()
{
    Bank b;
    int choice;
    b.create();
    do
    {
        cout<<"\n1.Deposit";
        cout<<"\n2.Withdraw";
        cout<<"\n3.Check Balance";
        cout<<"\n4.Display Details";
        cout<<"\n5.Exit";
        cout<<"\nEnter Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                b.deposit();
                break;
            case 2:
                b.withdraw();
                break;
            case 3:
                b.checkBalance();
                break;
            case 4:
                b.display();
                break;
            case 5:
                cout<<"Exiting!";
                break;
            default:
                cout<<"Invalid Choice";
        }
    } while(choice != 5);
    return 0;
}
