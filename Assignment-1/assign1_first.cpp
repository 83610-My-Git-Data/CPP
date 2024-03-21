#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;

    void initDate()
    {
        day = 1;
        month = 1;
        year = 1900;
    }

    void printDateOnConsole()
    {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter day, month, and year: ";
        cin >> day >> month >> year;
        // Clear the input buffer until a newline character is encountered
        while (cin.get() != '\n')
            ;
    }

    bool isLeapYear()
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        else
            return false;
    }
};

int main()
{
    Date date;
    int choice;

    do
    {
        cout << "1. Initialize date\n";
        cout << "2. Print date\n";
        cout << "3. Accept date from console\n";
        cout << "4. Check if leap year\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Clear the input buffer
        while (cin.get() != '\n')
            ;

        switch (choice)
        {
        case 1:
            date.initDate();
            break;
        case 2:
            date.printDateOnConsole();
            break;
        case 3:
            date.acceptDateFromConsole();
            break;
        case 4:
            if (date.isLeapYear())
                cout << "Leap year\n";
            else
                cout << "Not a leap year\n";
            break;
        case 5:
            cout << "Exiting...";
            break;
        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 5);

    return 0;
}
