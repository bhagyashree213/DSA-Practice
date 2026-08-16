# Find Duplicate Elements in an Array — C
Code -
#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are: ");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    return 0;
}

Output -
Enter the size of array: 6
Enter array elements:
10 20 30 20 40 10

Duplicate elements are: 10 20
