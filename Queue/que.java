package Queue;

public class que {
    private int MAX = 6;
    private int[] arr = new int[MAX];
    private int front = 0, rear = -1, itemCount = 0;

    public boolean isFull() { return itemCount == MAX; }
    public boolean isEmpty() { return itemCount == 0; }

    public void enqueue(int data) {
        if (!isFull()) {
            if (rear == MAX - 1) rear = -1;
            arr[++rear] = data;
            itemCount++;
        } else {
            System.out.println("Queue is full!");
        }
    }

    public int dequeue() {
        if (!isEmpty()) {
            int data = arr[front++];
            if (front == MAX) front = 0;
            itemCount--;
            return data;
        }
        System.out.println("Queue is empty!");
        return -1;
    }

    public int peek() {
        if (!isEmpty()) return arr[front];
        System.out.println("Queue is empty!");
        return -1;
    }

    public void display() {
        if (isEmpty()) {
            System.out.println("Queue is empty!");
            return;
        }
        System.out.print("Queue: ");
        int count = itemCount, f = front;
        while (count-- > 0) {
            System.out.print(arr[f] + " ");
            f = (f + 1) % MAX;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        que q = new que();
        q.enqueue(3);
        q.enqueue(5);
        q.enqueue(9);
        q.enqueue(1);
        q.enqueue(12);
        q.enqueue(15);

        q.display();
        System.out.println("Front (peek): " + q.peek());

        System.out.println("Removed: " + q.dequeue());
        q.display();
        System.out.println("Front after dequeue (peek): " + q.peek());
    }

 
}
