# Find Missing Element
Code -
#include <stdio.h>
int main()
{
    int n, i;
    int sum = 0, expectedSum;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements from 1 to %d:\n", n - 1, n);
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    expectedSum = n * (n + 1) / 2;
    printf("Missing element = %d\n", expectedSum - sum);
    return 0;
}

Output -
Enter the number of elements: 5
Enter 4 elements from 1 to 5:
1 2 3 5
