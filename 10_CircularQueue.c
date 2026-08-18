# Circular Queue
Code -
#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;
int size;

void enqueue() {
    int value;

    if ((rear + 1) % size == front) {
        printf("Queue Overflow!\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &value);

    if (front == -1)
        front = 0;

    rear = (rear + 1) % size;
    queue[rear] = value;

    printf("%d inserted successfully.\n", value);
}

void dequeue() {
    if (front == -1) {
        printf("Queue Underflow!\n");
        return;
    }

    printf("%d deleted successfully.\n", queue[front]);

    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % size;
    }
}

void display() {
    int i;

    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Circular Queue: ");

    i = front;

    while (1) {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % size;
    }

    printf("\n");
}

int main() {
    int choice;

    printf("Enter size of circular queue (max %d): ", MAX);
    scanf("%d", &size);

    if (size <= 0 || size > MAX) {
        printf("Invalid size!\n");
        return 0;
    }

    while (1) {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;
            case 4:
                printf("Program terminated.\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

Output -
Enter size of circular queue (max 100): 5

--- Circular Queue Menu ---
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter value: 10
10 inserted successfully.

--- Circular Queue Menu ---
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter value: 20
20 inserted successfully.

--- Circular Queue Menu ---
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter value: 30
30 inserted successfully.

--- Circular Queue Menu ---
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 3
Circular Queue: 10 20 30

--- Circular Queue Menu ---
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 2
10 deleted successfully.

--- Circular Queue Menu ---
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 3
Circular Queue: 20 30

--- Circular Queue Menu ---
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 4
Program terminated.

