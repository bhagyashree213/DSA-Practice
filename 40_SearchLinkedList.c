# Search in Linked List
Code -
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *newNode, *temp;
    int n, value, found = 0;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &value);

    temp = head;

    while (temp != NULL) {
        if (temp->data == value) {
            found = 1;
            break;
        }
        temp = temp->next;
    }

    if (found)
        printf("Element %d found in the linked list.\n", value);
    else
        printf("Element %d not found in the linked list.\n", value);

    return 0;
}

Output -
Enter number of nodes: 5
Enter data: 10
Enter data: 20
Enter data: 30
Enter data: 40
Enter data: 50
Enter element to search: 30
Element 30 found in the linked list.
