# Left Rotate an Array
Code -
#include <stdio.h>
int main() {
    int n, i, first;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    first = arr[0];
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
    printf("Array after left rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

Output -
Enter the size of array: 5
Enter 5 elements: 10 20 30 40 50
Array after left rotation: 20 30 40 50 10
