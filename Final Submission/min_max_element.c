//find minimum and maximun element in the array

#include <stdio.h>
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int main()
{
    int n=10;
    int a[10] = {23,53,67,32,7,82,43,83,92,12};
    printf("The array is: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    int maximum= max(a, n);
    int minimum= min(a,n);
    printf("\nMaximum element in the array is %d\n",maximum);
    printf("Minimum element in the array is %d\n",minimum);
    return 0;
}
