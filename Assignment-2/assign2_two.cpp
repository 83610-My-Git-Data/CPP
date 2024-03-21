#include <iostream>
using namespace std;

class Tollbooth {
private:
    unsigned int totalCars;
    double totalCash;

public:
    Tollbooth() {
        totalCars = 0;
        totalCash = 0;
    }

    void payingCar() {
        totalCars++;
        totalCash += 0.50;
    }

    void noPayCar() {
        totalCars++;
    }

    void printOnConsole() {
        cout << "Total cars passed: " << totalCars << endl;
        cout << "Total cash collected: $" << totalCash << endl;
        cout << "Number of paying cars: " << totalCars - 1 << endl; // Deducting 1 as it includes the last non-paying car
        cout << "Number of non-paying cars: 1" << endl; // Always 1 because it increments in noPayCar()
    }
};

int main() {
    Tollbooth t1;
    int choice;

    do {
        cout << "\nMenu options:\n";
        cout << "1. Car without payment\n";
        cout << "2. Car with payment\n";
        cout << "3. Print tollbooth information\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                t1.noPayCar();
                cout << "Car passed without payment.\n";
                break;
            case 2:
                t1.payingCar();
                cout << "Car passed with payment.\n";
                break;
            case 3:
                t1.printOnConsole();
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
