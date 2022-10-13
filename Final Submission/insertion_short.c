//insertion short
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter the size of the arrays:\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (temp < a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    printf("The sorted array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}