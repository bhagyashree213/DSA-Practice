# Merge Two Linked Lists
Code =
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *createList(int n) {
    struct Node *head = NULL, *temp = NULL, *newNode;
    int data;
    for (int i = 0; i < n; i++) {
        printf("Enter data: ");
        scanf("%d", &data);
        newNode = malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;
        if (head == NULL)
            head = newNode;
        else
            temp->next = newNode;
        temp = newNode;
    }
    return head;
}
struct Node *mergeLists(struct Node *head1, struct Node *head2) {
    if (head1 == NULL)
        return head2;
    struct Node *temp = head1;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = head2;
    return head1;
}
void display(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main() {
    int n1, n2;
    struct Node *head1, *head2, *merged;
    printf("Enter number of nodes in first list: ");
    scanf("%d", &n1);
    head1 = createList(n1);
    printf("Enter number of nodes in second list: ");
    scanf("%d", &n2);
    head2 = createList(n2);
    printf("First List: ");
    display(head1);
    printf("Second List: ");
    display(head2);
    merged = mergeLists(head1, head2);
    printf("Merged List: ");
    display(merged);
    return 0;
}

Output =
Enter number of nodes in first list: 3
Enter data: 10
Enter data: 20
Enter data: 30
Enter number of nodes in second list: 2
Enter data: 40
Enter data: 50
First List: 10 -> 20 -> 30 -> NULL
Second List: 40 -> 50 -> NULL
Merged List: 10 -> 20 -> 30 -> 40 -> 50 -> NULL
