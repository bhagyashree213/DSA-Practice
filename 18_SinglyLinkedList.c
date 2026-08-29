# Singly Linked List
Code -
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void insert(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));
    struct Node *temp;
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    } else {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}
void display() {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    int n, value, i;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &value);
        insert(value);
    }
    printf("\nSingly Linked List:\n");
    display();
    return 0;
}

Output -
Enter number of nodes: 5
Enter value: 1
Enter value: 2
Enter value: 2 6
Enter value: 4
Enter value: 3

Singly Linked List:
1 -> 2 -> 6 -> 4 -> 3 -> NULL
