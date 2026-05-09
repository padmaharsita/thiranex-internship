#include<iostream>
#include<cstring>
using namespace std;
class Library
{
    int bookid;
    char title[30];
    char author[30];
    int issued;
public:
    void addBook()
    {
        cout<<"Enter Book ID: ";
        cin>>bookid;
        cout<<"Enter Book Title: ";
        cin>>title;
        cout<<"Enter Author Name: ";
        cin>>author;
        issued = 0;
    }
    void display()
    {
        cout<<"\nBook ID: "<<bookid;
        cout<<"\nTitle: "<<title;
        cout<<"\nAuthor: "<<author;
        if(issued == 0)
            cout<<"\nStatus: Available\n";
        else
            cout<<"\nStatus: Issued\n";
    }
    void issueBook()
    {
        if(issued == 0)
        {
            issued = 1;
            cout<<"Book Issued Successfully\n";
        }
        else
        {
            cout<<"Book Already Issued\n";
        }
    }
    void returnBook()
    {
        issued = 0;
        cout<<"Book Returned Successfully\n";
    }
    void searchBook(char name[])
    {
        if(strcmp(title,name)==0 || strcmp(author,name)==0)
        {
            display();
        }
        else
        {
            cout<<"Book Not Found\n";
        }
    }
};
int main()
{
    Library b;
    int choice;
    char name[30];
    b.addBook();
    do
    {
        cout<<"\n1.Display";
        cout<<"\n2.Issue Book";
        cout<<"\n3.Return Book";
        cout<<"\n4.Search Book";
        cout<<"\n5.Exit";
        cout<<"\nEnter Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                b.display();
                break;
            case 2:
                b.issueBook();
                break;
            case 3:
                b.returnBook();
                break;
            case 4:
                cout<<"Enter Title or Author: ";
                cin>>name;
                b.searchBook(name);
                break;
            case 5:
                cout<<"Thank You";
                break;
            default:
                cout<<"Invalid Choice";
        }
    } while(choice != 5);
    return 0;
}