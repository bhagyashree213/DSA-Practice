# Insert Node in Circular Linked List
Code =
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void insertNode(int data) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }
    struct Node *temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
}
void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}
int main() {
    insertNode(10);
    insertNode(20);
    insertNode(30);
    printf("Circular Linked List: ");
    display();
    return 0;
}

Output =
Circular Linked List: 10 -> 20 -> 30 -> (head)
