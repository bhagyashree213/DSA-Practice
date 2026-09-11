# Sort Array in Descending Order
Code -
#include <stdio.h>
int main() {
    int n, i, j, temp;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array in descending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

Output -
Enter number of elements: 5
Enter array elements:
10 5 20 8 15

Array in descending order:
20 15 10 8 5
