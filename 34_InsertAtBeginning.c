# Insert At Beginning
Code -
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node* insertAtBeginning(struct Node *head, int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}
void display(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node *head = NULL;
    int n, value;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &value);
        head = insertAtBeginning(head, value);
    }
    printf("\nLinked List after insertion at beginning:\n");
    display(head);
    return 0;
}

Output -
Enter number of elements: 3
Enter element: 10
Enter element: 20
Enter element: 30

Linked List after insertion at beginning:
30 -> 20 -> 10 -> NULL
