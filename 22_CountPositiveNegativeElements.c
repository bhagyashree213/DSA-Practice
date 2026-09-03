# Count Positive and Negative Elements
Code -
#include <stdio.h>
int main() {
    int n, i;
    int positive = 0, negative = 0;
    int arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        }
    }
    printf("\nPositive elements: %d\n", positive);
    printf("Negative elements: %d\n", negative);
    return 0;
}

Output -
Enter the number of elements: 7
Enter 7 elements:
10
-5
8
-2
0
15
-7
Positive elements: 3
Negative elements: 3
