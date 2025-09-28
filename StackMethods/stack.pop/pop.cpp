#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int size;
    int* arr;

public:
    // Constructor
    Stack(int capacity) {
        size = capacity;
        arr = new int[size];
        top = -1;
    }

    // Destructor
    ~Stack() {
        delete[] arr;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void push(int data) {
        if (isFull()) {
            cout << "Stack is full. Cannot push " << data << endl;
        } else {
            arr[++top] = data;
            cout << "Pushed: " << data << endl;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return -1;
        } else {
            int val = arr[top--];
            cout << "Popped: " << val << endl;
            return val;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.display();

    // Demonstrate popping
    s.pop();
    s.pop();

    s.display();

    // Optionally, pop remaining elements to show empty stack
    while (!s.isEmpty()) {
        s.pop();
    }
    return 0;
}