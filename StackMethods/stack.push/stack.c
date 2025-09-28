#include <stdio.h>
int main() {
    int stack[100];
    int top = -1;

    // Push elements onto the stack
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    // Print stack elements
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    return 0;
}