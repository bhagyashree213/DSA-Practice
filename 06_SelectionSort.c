# Selction Sort
Code -
#include <stdio.h>
int main() {
    // Write C code here
    int a[100], n, i,j, min, temp;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        min =i;
        for(j=i+1; j<n; j++)
        {
            if(a[min]>a[j])
            {
                min =j;
            }
        }

        if (min!=i)
        {
            int temp = a[min];
            a[min] = a[i];
            a[i]  =  temp;
        }
    }
    printf("Sorted Array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
Output -
Enter number of elements:
5
Enter 5 elements: 
64 25 12 22 11
Sorted Array: 11 12 22 25 64

