class Stack:
    def __init__(self, capacity=8):
        self.stack = []
        self.capacity = capacity

    def is_empty(self):
        return len(self.stack) == 0

    def is_full(self):
        return len(self.stack) == self.capacity

    def push(self, value):
        if self.is_full():
            print(f"Stack Overflow! Cannot insert {value}")
        else:
            self.stack.append(value)

    def pop(self):
        if self.is_empty():
            print("Stack Underflow!")
            return None
        return self.stack.pop()

    def peek(self):
        if self.is_empty():
            print("Stack is empty!")
            return None
        return self.stack[-1]

    def print_stack(self):
        print(" ".join(map(str, self.stack)))


# Test
s = Stack(8)

s.push(44)
s.push(10)
s.push(62)
s.push(123)
s.push(15)

print("Stack Elements:", end=" ")
s.print_stack()

print("Top element:", s.peek())

print("Elements popped:", end=" ")
while not s.is_empty():
    print(s.pop(), end=" ")
print()
