#include <stdio.h>
#define MAX 5  // Maximum size of the stack

int stack[MAX];
int top = -1;  // Stack is initially empty

// Function to push an element onto the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack Underflow! No elements to pop.\n");
        return -1;  // Return an invalid value to indicate error
    } else {
        int value = stack[top];
        top--;
        return value;
    }
}

// Function to display the stack elements
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();  // Display stack after pushes

    int poppedValue = pop();
    if (poppedValue != -1) {
        printf("%d popped from the stack.\n", poppedValue);
    }
    display();  // Display stack after pop

    return 0;
}
