#Insert Elements in Array
Code - 
#include <stdio.h>
int main() {
    int arr[100], n, pos, value;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter position: ");
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &value);
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    n++;
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

Output -
Enter number of elements: 4 5
Enter elements:
1 2 3 4 5
Enter position: 5 6
Enter element to insert: 6
Array after insertion:
1 2 3 4 5 6 
