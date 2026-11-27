# Stack Using Linked List
Code =
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    printf("%d pushed into stack\n", value);
}

void display() {
    struct Node *temp = top;

    if (top == NULL) {
        printf("Stack is Empty\n");
        return;
    }

    printf("Stack elements: ");

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();

    return 0;
}

Output =
10 pushed into stack
20 pushed into stack
30 pushed into stack
Stack elements: 30 20 10
