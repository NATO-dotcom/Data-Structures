class Stack:
    def __init__(self, capacity=8):
        self.size = capacity
        self.stack = []
    
    def is_empty(self):
        return len(self.stack) == 0
    
    def is_full(self):
        return len(self.stack) == self.size
    
    def push(self, data):
        if self.is_full():
            print(f"Stack is full. Cannot push {data}")
        else:
            self.stack.append(data)
    
    def pop(self):
        if self.is_empty():
            print("Stack is empty. Cannot pop.")
            return None
        else:
            return self.stack.pop()
    
    def peek(self):
        if self.is_empty():
            print("Stack is empty.")
            return None
        else:
            return self.stack[-1]
    
    def display(self):
        if self.is_empty():
            print("Stack is empty.")
        else:
            print("Stack elements (bottom → top):", self.stack)


# Main
if __name__ == "__main__":
    s = Stack(8)
    
    s.push(44)
    
    s.push(10)
    s.push(62)
    s.push(123)
    s.push(15)
    
    print("Element at top of the stack:", s.peek())
    
    s.display()
    
    print("Elements (popping all):")
    while not s.is_empty():
        print(s.pop())
    
    print("Stack full:", "true" if s.is_full() else "false")
    print("Stack empty:", "true" if s.is_empty() else "false")