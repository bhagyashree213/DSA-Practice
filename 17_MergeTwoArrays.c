# Merge Two Arrays
Code -
#include <stdio.h>
int main() {
    int n1, n2;
    int arr1[100], arr2[100], merged[200];
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }
    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}

Output -
Enter the number of elements in first array: 3
Enter elements of first array:
10 20 30
Enter the number of elements in second array: 3
Enter elements of second array:
40 50 60
Merged array:
10 20 30 40 50 60
