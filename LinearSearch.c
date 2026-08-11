1.	Linear Search in C
Code – 
#include <stdio.h>
int main() {
    int a[10], n, search, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(a[i] == search) {
            printf("Element found at position %d", i + 1);
            return 0;
        }
    }
    printf("Element not found");
    return 0;
}
Output –
Enter number of elements: 5
Enter elements: 1 4 6 7 9
Enter element to search: 1 
Element found at position 1
