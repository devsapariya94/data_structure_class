// linear search
#include <stdio.h>
int main()
{
    int a[20], i, n, search;
    printf("Enter the number of elements in the array (less than 20): ");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            printf("Element found at position %d\n", i + 1);
            break;
        }
    }
    if (i == n)
    {
        printf("Element not found\n");
    }
    return 0;
}
