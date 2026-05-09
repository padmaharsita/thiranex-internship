#include<iostream>
#include<fstream>
using namespace std;
int main() {
    int choice, roll;
    string name;
    do {
        cout << "\n--- Student Management System ---";
        cout << "\n1. Add Student";
        cout << "\n2. View Students";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
        if(choice == 1) {
            ofstream file("students.txt", ios::app);
            cout << "Enter Roll Number: ";
            cin >> roll;
            cout << "Enter Name: ";
            cin >> name;
            file << roll << " " << name << endl;
            file.close();
            cout << "Student Added Successfully!\n";
        }
        else if(choice == 2) {
            ifstream file("students.txt");
            cout << "\nStudent Records:\n";
            while(file >> roll >> name) {
                cout << "Roll No: " << roll
                     << " Name: " << name << endl;
            }
            file.close();
        }
        else if(choice == 3) {
            cout << "Program Ended";
        }
        else {
            cout << "Invalid Choice";
        }
    } while(choice != 3);
    return 0;
}