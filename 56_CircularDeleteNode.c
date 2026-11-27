# Delete Node from Circular Linked List
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
void deleteNode(int key) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = head;
    struct Node *prev = NULL;
    if (head->data == key) {
        if (head->next == head) {
            free(head);
            head = NULL;
            return;
        }
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = head->next;
        temp = head;
        head = head->next;
        free(temp);
        return;
    }
    temp = head;
    do {
        prev = temp;
        temp = temp->next;

        if (temp->data == key) {
            prev->next = temp->next;
            free(temp);
            return;
        }
    } while (temp != head);
    printf("Node not found\n");
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
    printf("Original List: ");
    display();
    deleteNode(20);
    printf("After Deletion: ");
    display();
    return 0;
}

Output =
Original List: 10 -> 20 -> 30 -> (head)
After Deletion: 10 -> 30 -> (head)
