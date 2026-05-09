#include<iostream>
#include<fstream>
using namespace std;

class Bank
{
    int account_no;
    char name[30];
    float balance;

public:

    void create()
    {
        cout<<"Enter account number: ";
        cin>>account_no;

        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter balance: ";
        cin>>balance;
    }

    void display()
    {
        cout<<"\nAccount Number: "<<account_no;
        cout<<"\nName: "<<name;
        cout<<"\nBalance: "<<balance;
    }

    void save()
    {
        ofstream file("bank.dat", ios::binary | ios::app);
        file.write((char*)this, sizeof(*this));
        file.close();
    }
};

int main()
{
    Bank b;

    b.create();
    b.save();

    cout<<"\nAccount created successfully!\n";

    return 0;
}