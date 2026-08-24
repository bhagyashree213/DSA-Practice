# Deletion from Array
Code -
#include <stdio.h>
int main() {
    int arr[100], n, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
        printf("Invalid position");
    } else {
        for (int i = pos - 1; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n--;
        printf("Array after deletion: ");
        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
    }
    return 0;
}

Output -
Enter number of elements: 5
Enter elements: 10 20 30 40 50
Enter position to delete: 3
Array after deletion: 10 20 40 50
