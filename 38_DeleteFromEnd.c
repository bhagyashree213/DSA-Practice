# Delete from End
Code -
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void insertEnd(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}
void deleteEnd() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    if (head->next == NULL) {
        printf("Deleted element: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    struct Node *temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;
    printf("Deleted element: %d\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}
void display() {
    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    printf("Before deletion:\n");
    display();
    deleteEnd();
    printf("After deletion:\n");
    display();
    return 0;
}

Output -
Before deletion:
Linked List: 10 20 30 40
Deleted element: 40
After deletion:
Linked List: 10 20 30
