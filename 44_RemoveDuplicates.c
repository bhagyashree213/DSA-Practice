# Remove Duplicates 
Code =
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void insert(int data) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
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
void removeDuplicates() {
    struct Node *current = head;
    while (current != NULL) {
        struct Node *temp = current;
        while (temp->next != NULL) {
            if (temp->next->data == current->data) {
                struct Node *duplicate = temp->next;
                temp->next = duplicate->next;
                free(duplicate);
            } else {
                temp = temp->next;
            }
        }
        current = current->next;
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
    int n, data;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter data: ");
        scanf("%d", &data);
        insert(data);
    }
    printf("Original List: ");
    display();
    removeDuplicates();
    printf("List after removing duplicates: ");
    display();
    return 0;
}

Output =
Enter number of nodes: 6
Enter data: 10
Enter data: 20
Enter data: 10
Enter data: 30
Enter data: 20
Enter data: 40
Original List: 10 -> 20 -> 10 -> 30 -> 20 -> 40 -> NULL
List after removing duplicates: 10 -> 20 -> 30 -> 40 -> NULL
