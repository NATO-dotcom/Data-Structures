package StackImplementation;
public class stack {
    private int[] stack;
    private int top;
    private int size;

    public stack(int capacity) {
        size = capacity;
        stack = new int[size];
        top = -1;
    }

    public boolean isEmpty() {
        return top == -1;
    }

    public boolean isFull() {
        return top == size - 1;
    }

    public void push(int data) {
        if (isFull()) {
            System.out.println("Stack is full. Cannot push " + data);
        } else {
            stack[++top] = data;
        }
    }

    public int pop() {
        if (isEmpty()) {
            System.out.println("Stack is empty. Cannot pop.");
            return -1;
        } else {
            return stack[top--];
        }
    }

    public int peek() {
        if (isEmpty()) {
            System.out.println("Stack is empty.");
            return -1;
        } else {
            return stack[top];
        }
    }

    public void display() {
        if (isEmpty()) {
            System.out.println("Stack is empty.");
        } else {
            System.out.print("Stack elements (bottom → top): ");
            for (int i = 0; i <= top; i++) {
                System.out.print(stack[i] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        stack s = new stack(8);

        s.push(44);
        s.push(10);
        s.push(62);
        s.push(123);
        s.push(15);

        System.out.println("Element at top of the stack: " + s.peek());

        s.display();

        System.out.println("Elements (popping all):");
        while (!s.isEmpty()) {
            System.out.println(s.pop());
        }

        System.out.println("Stack full: " + (s.isFull() ? "true" : "false"));
        System.out.println("Stack empty: " + (s.isEmpty() ? "true" : "false"));
    }
}


