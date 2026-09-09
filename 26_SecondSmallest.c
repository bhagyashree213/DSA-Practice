# Second Smallest Element
Code -
#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int arr[100];
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX) {
        printf("Second smallest element does not exist.\n");
    } else {
        printf("Second smallest element = %d\n", secondSmallest);
    }

    return 0;
}

Output -
Enter number of elements: 6
Enter elements:
12 5 8 3 9 7

Second smallest element = 5
