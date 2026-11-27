# Push Operation
Code =
#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is Empty\n");
        return;
    }

    printf("Stack elements: ");

    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }

    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);

    display();

    return 0;
}

Output =
10 pushed into stack
20 pushed into stack
30 pushed into stack
40 pushed into stack
Stack elements: 40 30 20 10
