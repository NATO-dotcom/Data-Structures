#include <iostream>
using namespace std;
#define MAX 6

class Queue {
    int arr[MAX];
    int front, rear, itemCount;

public:
    Queue() {
        front = 0; rear = -1; itemCount = 0;
    }

    bool isFull() { return itemCount == MAX; }
    bool isEmpty() { return itemCount == 0; }

    void enqueue(int data) {
        if (!isFull()) {
            if (rear == MAX - 1) rear = -1;
            arr[++rear] = data;
            itemCount++;
        } else {
            cout << "Queue is full!\n";
        }
    }

    int dequeue() {
        if (!isEmpty()) {
            int data = arr[front++];
            if (front == MAX) front = 0;
            itemCount--;
            return data;
        }
        cout << "Queue is empty!\n";
        return -1;
    }

    int peek() {
        if (!isEmpty()) return arr[front];
        cout << "Queue is empty!\n";
        return -1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue: ";
        int count = itemCount, f = front;
        while (count--) {
            cout << arr[f] << " ";
            f = (f + 1) % MAX;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(9);
    q.enqueue(1);
    q.enqueue(12);
    q.enqueue(15);

    q.display();
    cout << "Front (peek): " << q.peek() << endl;

    cout << "Removed: " << q.dequeue() << endl;
    q.display();
    cout << "Front after dequeue (peek): " << q.peek() << endl;
}
