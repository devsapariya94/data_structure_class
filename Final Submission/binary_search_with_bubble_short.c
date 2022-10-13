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
    int n, i, j, temp;
    n=10;
    int a[10] = {23,53,67,32,7,82,43,83,92,12};
    printf("The given array is: ");
    for (int  i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("The sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    int search;
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
    return 0;
}