# Reverse an Array in C
Code -
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Reversed array:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}

Output -
Enter the size of array: 5
Enter array elements:
10 20 30 40 50

Reversed array:
50 40 30 20 10
