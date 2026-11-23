# Insert at Position in Doubly Linked List in C
Code =
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;

void insertAtPosition(int value, int position) {
    struct Node *newNode, *temp;
    int i;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = head;

        if (head != NULL)
            head->prev = newNode;

        head = newNode;
        return;
    }

    temp = head;

    for (i = 1; i < position - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}

void display() {
    struct Node *temp = head;

    if (temp == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Doubly Linked List: ");

    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {
    int n, value, position, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter data: ");
        scanf("%d", &value);
        insertAtPosition(value, i);
    }

    printf("\nBefore Insertion:\n");
    display();

    printf("\nEnter value to insert: ");
    scanf("%d", &value);

    printf("Enter position: ");
    scanf("%d", &position);

    insertAtPosition(value, position);

    printf("\nAfter Insertion:\n");
    display();

    return 0;
}

Output =
Enter number of nodes: 3
Enter data: 10
Enter data: 20
Enter data: 30

Before Insertion:
Doubly Linked List: 10 <-> 20 <-> 30 <-> NULL

Enter value to insert: 15
Enter position: 2

After Insertion:
Doubly Linked List: 10 <-> 15 <-> 20 <-> 30 <-> NULL
