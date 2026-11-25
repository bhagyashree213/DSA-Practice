# Delete from Position in Doubly Linked List
Code =
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;

void insert(int data) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node *temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

void deleteAtPosition(int pos) {
    if (head == NULL || pos < 1) {
        printf("Invalid position!\n");
        return;
    }

    struct Node *temp = head;
    int i;

    for (i = 1; temp != NULL && i < pos; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Invalid position!\n");
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);

    printf("Node deleted successfully.\n");
}

void display() {
    struct Node *temp = head;

    if (head == NULL) {
        printf("List is empty.\n");
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
    int n, data, pos, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter data: ");
        scanf("%d", &data);
        insert(data);
    }

    display();

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    deleteAtPosition(pos);

    display();

    return 0;
}

Output =
Enter number of nodes: 4
Enter data: 10
Enter data: 20
Enter data: 30
Enter data: 40

Original List:
Doubly Linked List: 10 <-> 20 <-> 30 <-> 40 <-> NULL

Reversed List:
Doubly Linked List: 40 <-> 30 <-> 20 <-> 10 <-> NULL
