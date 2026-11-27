# Create Circular Linked List 
Code =
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void create(int data) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }
    struct Node *temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
}
void display() {
    if (head == NULL) {
        printf("Circular Linked List is empty.\n");
        return;
    }
    struct Node *temp = head;
    printf("Circular Linked List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(Back to Head)\n");
}
int main() {
    int n, data, i;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number of nodes!\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        printf("Enter data: ");
        scanf("%d", &data);
        create(data);
    }
    display();
    return 0;
}

Output =
Enter number of nodes: 4
Enter data: 10
Enter data: 20
Enter data: 30
Enter data: 40

Circular Linked List: 10 -> 20 -> 30 -> 40 -> (Back to Head)
