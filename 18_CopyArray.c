# Copy an Array
Code -
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], copy[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        copy[i] = arr[i];
    }
    printf("Original Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nCopied Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", copy[i]);
    }
    printf("\n");
    return 0;
}

Output -
Enter the number of elements: 5
Enter 5 elements:
10 20 30 40 50
Original Array: 10 20 30 40 50
Copied Array: 10 20 30 40 50
