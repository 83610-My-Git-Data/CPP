#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    
    void initStudent() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name; 
        cout << "Enter marks: ";
        cin >> marks;
    }

    void printStudentOnConsole() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    
    void acceptStudentFromConsole() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name; 
        cout << "Enter marks: ";
        cin >> marks;
    }
};

int main() {
    Student student;
    int choice;

    do {
        cout << "\nMenu options:\n";
        cout << "1. Initialize student\n";
        cout << "2. Print student details\n";
        cout << "3. Accept student details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                student.initStudent();
                break;
            case 2:
                student.printStudentOnConsole();
                break;
            case 3:
                student.acceptStudentFromConsole();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please enter a valid choice.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
