# Find Average of Array Elements
Code -
#include <stdio.h>
int main() {
    int n, arr[100];
    int sum = 0;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (float)sum / n;
    printf("Average of array elements: %.2f\n", average);
    return 0;
}

Output -
Enter the number of elements: 5
Enter 5 elements:
10 20 30 40 50
Average of array elements: 30.00
