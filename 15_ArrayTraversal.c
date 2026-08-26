# Array Traversal in C
Code -
#include <stdio.h>
int main() {
    int n, arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

Output -
Enter the number of elements: 6
Enter 6 elements:
2 3 1 3 8 7 6
Array elements are:
2 1 3 8 7 6 
