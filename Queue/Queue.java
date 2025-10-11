package Queue;

public class Queue {
    private int maxSize;
    private int front;
    private int rear;
    private int nItems;
    private int[] queueArray;

    public Queue(int size) {
        this.maxSize = size;
        this.queueArray = new int[maxSize];
        this.front = 0;
        this.rear = -1;
        this.nItems = 0;
    }

    public void enqueue(int value) {
        if (nItems == maxSize) {
            System.out.println("Queue is full");
            return;
        }
        if (rear == maxSize - 1) {
            rear = -1; // wrap around
        }
        queueArray[++rear] = value;
        nItems++;
    }

    public int dequeue() {
        if (nItems == 0) {
            System.out.println("Queue is empty");
            return -1; // or throw exception
        }
        int temp = queueArray[front++];
        if (front == maxSize) {
            front = 0; // wrap around
        }
        nItems--;
        return temp;
    }

    public boolean isEmpty() {
        return nItems == 0;
    }

    public boolean isFull() {
        return nItems == maxSize;
    }

    public int size() {
        return nItems;
    }

    public void display() {
        System.out.print("Queue: ");
        for (int i = 0; i < nItems; i++) {
            System.out.print(queueArray[(front + i) % maxSize] + " ");
        }
        System.out.println();
    }   
}
