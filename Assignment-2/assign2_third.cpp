#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string building;
    string street;
    string city;
    int pin;

public:
    Address() {
        cout << "constructor called" << endl;
    }

    string getBuilding() {
        return building;
    }

    void setBuilding(string building) {
        this->building = building;
    }

    string getStreet() {
        return street;
    }

    void setStreet(string street) {
        this->street = street;
    }

    string getCity() {
        return city;
    }

    void setCity(string city) {
        this->city = city;
    }

    int getPin() {
        return pin;
    }

    void setPin(int pin) {
        this->pin = pin;
    }

    void acceptAddress() {
        cout << "Enter Building: ";
        cin >> building;
        cout << "Enter Street: ";
        cin >> street;
        cout << "Enter City: ";
        cin >> city;
        cout << "Enter Pin: ";
        cin >> pin;
    }

    void display() {
        cout << "Building: " << building << endl;
        cout << "Street: " << street << endl;
        cout << "City: " << city << endl;
        cout << "Pin: " << pin << endl;
    }
};

int main() {
    Address a1;
    int choice;
    do {
        cout << "\nMenu options:\n";
        cout << "1. Enter Address\n";
        cout << "2. Display Address\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                a1.acceptAddress();
                break;
            case 2:
                a1.display();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please enter a valid choice.\n";
                break;
        }
    } while (choice != 3);

    return 0;
}
