#include <iostream>
using namespace std;


struct Struct {
    int day;
    int month;
    int year;

    void initDate() {
        day = 1;
        month = 1;
        year = 1900;
    }

    void printDateOnConsole() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    void acceptDateFromConsole() {
        cout << "Enter day, month, and year: ";
        cin >> day >> month >> year;
    }

    bool isLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        else
            return false;
    }
};


class Class {
private:
    int day;
    int month;
    int year;

public:
    void initDate() {
        day = 1;
        month = 1;
        year = 1900;
    }

    void printDateOnConsole() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    void acceptDateFromConsole() {
        cout << "Enter day, month, and year: ";
        cin >> day >> month >> year;
    }

    bool isLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        else
            return false;
    }
};

int main() {
    
    Struct s1;
    
    Class c1;

    int choice;
    do {
        cout << "\nMenu options:\n";
        cout << "1. Initialize date (Structure)\n";
        cout << "2. Print date (Structure)\n";
        cout << "3. Accept date from console (Structure)\n";
        cout << "4. Check if leap year (Structure)\n";
        cout << "5. Initialize date (Class)\n";
        cout << "6. Print date (Class)\n";
        cout << "7. Accept date from console (Class)\n";
        cout << "8. Check if leap year (Class)\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s1.initDate();
                break;
            case 2:
                s1.printDateOnConsole();
                break;
            case 3:
                s1.acceptDateFromConsole();
                break;
            case 4:
                if (s1.isLeapYear())
                    cout << "Leap year\n";
                else
                    cout << "Not a leap year\n";
                break;
            case 5:
                s1.initDate();
                break;
            case 6:
                c1.printDateOnConsole();
                break;
            case 7:
                c1.acceptDateFromConsole();
                break;
            case 8:
                if (c1.isLeapYear())
                    cout << "Leap year\n";
                else
                    cout << "Not a leap year\n";
                break;
            case 9:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please enter a valid choice.\n";
                break;
        }
    } while (choice != 9);

    return 0;
}
