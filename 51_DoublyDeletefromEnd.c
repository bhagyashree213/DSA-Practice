# Delete from End in Doubly Linked List in C
Code =
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *head = NULL;
void insert(int value) {
    struct Node *newNode, *temp;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return;
    }
    temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}
void deleteFromEnd() {
    struct Node *temp;
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    temp = head;
    if (head->next == NULL) {
        printf("Deleted element: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    while (temp->next != NULL)
        temp = temp->next;
    printf("Deleted element: %d\n", temp->data);
    temp->prev->next = NULL;
    free(temp);
}
void display() {
    struct Node *temp = head;
    if (head == NULL) {
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
    int n, value, i;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter data: ");
        scanf("%d", &value);
        insert(value);
    }
    printf("\nBefore Deletion:\n");
    display();

    deleteFromEnd();

    printf("\nAfter Deletion:\n");
    display();
    return 0;
}

Output =
Enter number of nodes: 3
Enter data: 10
Enter data: 20
Enter data: 30

Before Deletion:
Doubly Linked List: 10 <-> 20 <-> 30 <-> NULL

Deleted element: 30

After Deletion:
Doubly Linked List: 10 <-> 20 <-> NULL
