#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
    int height;

public:
    
    Box() {
        length = 1;
        width = 1;
        height = 1;
    }
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    Box(int value) {
        length = value;
        width = value;
        height = value;
    }

    int calculateVolume() {
        return length * width * height;
    }
};

int main() {
    int choice;

    do {
        cout << "Menu options:\n";
        cout << "1. Calculate Volume with default values\n";
        cout << "2. Calculate Volume with length, breadth, and height with same value\n";
        cout << "3. Calculate Volume with different length, breadth, and height values\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Box b1; 
                cout << "Volume with default Values: " << b1.calculateVolume() << endl;
                break;
            }
            case 2: {
                int value;
                cout << "Enter a Value for length, width, and height: ";
                cin >> value;
                Box b2(value);
                cout << "Volume with same length, width, and height values: " << b2.calculateVolume() << endl;
                break;
            }
            case 3: {
                int length, width, height;
                cout << "Enter length, width, and height: ";
                cin >> length >> width >> height;
                Box b3(length, width, height); 
                cout << "Volume with different length, width, and height values: " << b3.calculateVolume() << endl;
                break;
            }
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice..\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
