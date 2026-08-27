# Find Sum of Array Elements -
Code -
#include <stdio.h>
int main() {
    int n, arr[100], sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of array elements: %d\n", sum);
    return 0;
}

Output -
Enter the number of elements: 5
Enter 5 elements:
10 20 30 40 50
Sum of array elements: 150
