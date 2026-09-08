# Second Largest Element
Code -
#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int arr[100];
    int largest, secondLargest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = INT_MIN;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("Second largest element does not exist.\n");
    } else {
        printf("Second largest element = %d\n", secondLargest);
    }
  
    return 0;
}

Output -
Enter the number of elements: 5
Enter 5 elements:
10 25 8 40 15
Second largest element = 25
