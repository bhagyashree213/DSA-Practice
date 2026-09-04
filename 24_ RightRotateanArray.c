#  Right Rotate an Array
Code -
#include <stdio.h>
int main() {
    int n, k;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of rotations: ");
    scanf("%d", &k);
    k = k % n;
    for (int r = 0; r < k; r++) {
        int last = arr[n - 1];
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }
    printf("Array after right rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

Output -
Enter the size of array: 5
Enter array elements: 1 2 3 4 5
Enter number of rotations: 2
Array after right rotation: 4 5 1 2 3
