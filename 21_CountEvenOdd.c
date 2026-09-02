# Count Even and Odd Elements
Code -
#include <stdio.h>
int main() {
    int n, i;
    int even = 0, odd = 0;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);
    return 0;
}

Output -
Enter number of elements: 6
Enter 6 elements:
10 15 20 25 30 35
Even elements = 3
Odd elements = 3
