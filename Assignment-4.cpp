#include <iostream>
using namespace std;

class Stack
{
private:
    int size;
    int top;
    int *ptr;

public:
    Stack(int size = 5)
    {
        this->size = size;
        top = -1;
        ptr = new int[size];
    }

    void push(int element)
    {
        if (!isFull())
        {
            top++;
            ptr[top] = element;
            cout << "Element " << element << " pushed onto the stack." << endl;
        }
        else
            cout << "Stack Overflow" << endl;
    }

    void pop()
    {
        if (!isEmpty())
        {
            cout << "Element " << ptr[top] << " popped from the stack." << endl;
            top--;
        }
        else
            cout << "Stack underflow" << endl;
    }

    int peek()
    {
        if (!isEmpty())
            return ptr[top];
        else {
            cout << "Stack is empty." << endl;
            return -1; // Return some default value to indicate an empty stack.
        }
    }

    void print()
    {
        if (!isEmpty()) {
            cout << "Elements in the stack are: ";
            for (int i = top; i >= 0; i--)
                cout << ptr[i] << " ";
            cout << endl;
        } else {
            cout << "Stack is empty." << endl;
        }
    }

    bool isFull()
    {
        return top == (size - 1);
    }

    bool isEmpty()
    {
        return top == -1;
    }

    ~Stack()
    {
        delete[] ptr;
        ptr = NULL;
    }
};

int main()
{
    Stack s;
    int choice, element;

    do {
        cout << "\nStack Menu\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Print\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter element to push: ";
                cin >> element;
                s.push(element);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                cout << "Top element of stack is: " << s.peek() << endl;
                break;
            case 4:
                s.print();
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid choice.\n";
        }
    } while(choice != 5);

    return 0;
}
