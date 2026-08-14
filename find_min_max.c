# Find Minimum and Maximum Element from the array
Code -
#include <stdio.h>
int main() {
    int arr[100], n;
    int min, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min = max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);
    return 0;
}
Output -
Enter number of elements: 5
Enter 5 elements:
10 25 5 40 15
Minimum element = 5
Maximum element = 40

