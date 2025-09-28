#include <stdio.h>
#include <stdbool.h>
#define MAX 6

int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

bool isFull() { return itemCount == MAX; }
bool isEmpty() { return itemCount == 0; }

void enqueue(int data) {
    if (!isFull()) {
        if (rear == MAX - 1) rear = -1;
        intArray[++rear] = data;
        itemCount++;
    } else {
        printf("Queue is full!\n");
    }
}

int dequeue() {
    if (!isEmpty()) {
        int data = intArray[front++];
        if (front == MAX) front = 0;
        itemCount--;
        return data;
    }
    printf("Queue is empty!\n");
    return -1;
}

int peek() {
    if (!isEmpty()) return intArray[front];
    printf("Queue is empty!\n");
    return -1;
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue: ");
    int count = itemCount, f = front;
    while (count--) {
        printf("%d ", intArray[f]);
        f = (f + 1) % MAX;
    }
    printf("\n");
}

int main() {
    enqueue(3);
    enqueue(5);
    enqueue(9);
    enqueue(1);
    enqueue(12);
    enqueue(15);

    display();
    printf("Front (peek): %d\n", peek());

    printf("Removed: %d\n", dequeue());
    display();
    printf("Front after dequeue (peek): %d\n", peek());
}
