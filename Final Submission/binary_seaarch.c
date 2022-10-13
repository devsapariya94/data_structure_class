#include <stdio.h>
int binary_search(int a[], int n, int search)
{
    int first = 0, last = n - 1, middle;
    while (first <= last)
    {
        middle = (first + last) / 2;
        if (a[middle] == search)
        {
            return middle;
        }
        else if (a[middle] < search)
        {
            first = middle + 1;
        }
        else
        {
            last = middle - 1;
        }
    }
    return -1;
}


int main()
{
    int i, search;
    int a[10]={6,13,33,39,43,49.54,67,72,81,90};
    printf("The shorted array is : ");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ",a[i]);
    }
    
    printf("\nEnter the element to be searched: ");
    scanf("%d", &search);
    int ans = binary_search(a, 10, search);
    if (ans == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at position %d\n", ans + 1);
    }
}
