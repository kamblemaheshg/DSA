#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Queue structure
typedef struct Queue {
    Node* front;
    Node* rear;
    int size;
} Queue;

// Function to create a new queue
Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    queue->size = 0;
    return queue;
}

// Function to enqueue an element into the queue
void enqueue(Queue* queue, int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    if (queue->rear == NULL) {
        queue->front = node;
        queue->rear = node;
    } else {
        queue->rear->next = node;
        queue->rear = node;
    }
    queue->size++;
}

// Function to dequeue an element from the queue
int dequeue(Queue* queue) {
    if (queue->front == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    int data = queue->front->data;
    Node* node = queue->front;
    queue->front = node->next;
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    free(node);
    queue->size--;
    return data;
}

// Function to peek at the front element of the queue
int peek(Queue* queue) {
    if (queue->front == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue->front->data;
}

// Function to check if the queue is empty
int isEmpty(Queue* queue) {
    return queue->size == 0;
}

// Function to print the queue
void printQueue(Queue* queue) {
    Node* node = queue->front;
    while (node!= NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    Queue* queue = createQueue();

    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    enqueue(queue, 4);
    enqueue(queue, 5);

    printQueue(queue); // Output: 1 2 3 4 5

    printf("Dequeued element: %d\n", dequeue(queue)); // Output: 1
    printf("Dequeued element: %d\n", dequeue(queue)); // Output: 2

    printQueue(queue); // Output: 3 4 5

    printf("Peek: %d\n", peek(queue)); // Output: 3

    printf("Is empty: %d\n", isEmpty(queue)); // Output: 0

    return 0;
}
