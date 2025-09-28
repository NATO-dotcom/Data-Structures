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
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return -1;
        } else {
            return arr[top--];
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return arr[top];
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements (bottom → top): ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s(8);

    s.push(44);
    s.push(10);
    s.push(62);
    s.push(123);
    s.push(15);

    cout << "Element at top of the stack: " << s.peek() << endl;

    s.display();

    cout << "Elements (popping all):" << endl;
    while (!s.isEmpty()) {
        cout << s.pop() << endl;
    }

    cout << "Stack full: " << (s.isFull() ? "true" : "false") << endl;
    cout << "Stack empty: " << (s.isEmpty() ? "true" : "false") << endl;

    return 0;
}