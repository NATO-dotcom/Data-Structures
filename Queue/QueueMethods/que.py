MAX = 6

class Queue:
    def __init__(self):
        self.arr = [0] * MAX
        self.front = 0
        self.rear = -1
        self.itemCount = 0

    def isFull(self):
        return self.itemCount == MAX

    def isEmpty(self):
        return self.itemCount == 0

    def enqueue(self, data):
        if not self.isFull():
            if self.rear == MAX - 1:
                self.rear = -1
            self.rear += 1
            self.arr[self.rear] = data
            self.itemCount += 1
        else:
            print("Queue is full!")

    def dequeue(self):
        if not self.isEmpty():
            data = self.arr[self.front]
            self.front += 1
            if self.front == MAX:
                self.front = 0
            self.itemCount -= 1
            return data
        print("Queue is empty!")
        return -1

    def peek(self):
        if not self.isEmpty():
            return self.arr[self.front]
        print("Queue is empty!")
        return -1

    def display(self):
        if self.isEmpty():
            print("Queue is empty!")
            return
        print("Queue:", end=" ")
        count = self.itemCount
        f = self.front
        while count > 0:
            print(self.arr[f], end=" ")
            f = (f + 1) % MAX
            count -= 1
        print()

# Example
q = Queue()
q.enqueue(3)
q.enqueue(5)
q.enqueue(9)
q.enqueue(1)
q.enqueue(12)
q.enqueue(15)

q.display()
print("Front (peek):", q.peek())

print("Removed:", q.dequeue())
q.display()
print("Front after dequeue (peek):", q.peek())
