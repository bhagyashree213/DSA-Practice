* Binary Search in C
Code –
#include <stdio.h>
int main() {
    int a[10], n, search;
    int low, high, mid;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements in sorted order: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &search);
    low = 0;
    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] == search) {
            printf("Element found at position %d", mid + 1);
            return 0;
        }
        else if(a[mid] < search) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    printf("Element not found");
    return 0;
}
Output –
Enter number of elements: 5
Enter elements in sorted order: 1 2 3 4 5
Enter element to search: 4
Element found at position 4
