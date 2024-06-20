#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Stack structure
typedef struct Stack {
    Node* top;
    int size;
} Stack;

// Function to create a new stack
Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    stack->size = 0;
    return stack;
}

// Function to push an element onto the stack
void push(Stack* stack, int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = stack->top;
    stack->top = node;
    stack->size++;
}

// Function to pop an element from the stack
int pop(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    int data = stack->top->data;
    Node* node = stack->top;
    stack->top = node->next;
    free(node);
    stack->size--;
    return data;
}

// Function to peek at the top element of the stack
int peek(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->top->data;
}

// Function to check if the stack is empty
int isEmpty(Stack* stack) {
    return stack->size == 0;
}

// Function to print the stack
void printStack(Stack* stack) {
    Node* node = stack->top;
    while (node!= NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    Stack* stack = createStack();

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);

    printStack(stack); // Output: 5 4 3 2 1

    printf("Popped element: %d\n", pop(stack)); // Output: 5
    printf("Popped element: %d\n", pop(stack)); // Output: 4

    printStack(stack); // Output: 3 2 1

    printf("Peek: %d\n", peek(stack)); // Output: 3

    printf("Is empty: %d\n", isEmpty(stack)); // Output: 0

    return 0;
}
