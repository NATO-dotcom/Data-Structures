#include <stdio.h>

int MAXSIZE = 8;
int stack[8];
int top = -1;

/* Check if the stack is empty */
int isempty() {
   return top == -1;
}

/* Check if the stack is full */
int isfull() {
   return top == MAXSIZE - 1;
}

/* Function to return the topmost element in the stack */
int peek() {
   if (!isempty()) {
      return stack[top];
   } else {
      printf("Stack is empty.\n");
      return -1;
   }
}

/* Function to delete from the stack */
int pop() {
   if (!isempty()) {
      int data = stack[top];
      top = top - 1;
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
      return -1;
   }
}

/* Function to insert into the stack */
void push(int data) {
   if (!isfull()) {
      top = top + 1;
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

/* Main function */
int main() {
   push(44);
   push(10);
   push(62);
   push(123);
   push(15);

   printf("Element at top of the stack: %d\n", peek());

   printf("Elements (popping all):\n");
   while (!isempty()) {
      int data = pop();
      printf("%d\n", data);
   }

   printf("Stack full: %s\n", isfull() ? "true" : "false");
   printf("Stack empty: %s\n", isempty() ? "true" : "false");

   return 0;
}