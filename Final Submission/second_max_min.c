// second maximum element and second minimum element in the array
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
int second_max(int a[], int n)
{
    int max = a[0];
    int second_max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            second_max = max;
            max = a[i];
        }
        else if (a[i] > second_max)
        {
            second_max = a[i];
        }
    }
    return second_max;
}

// function for finding second minimum element in the array
int second_min(int a[], int n)
{
    int min = a[0];
    int second_min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            second_min = min;
            min = a[i];
        }
        else if (a[i] < second_min)
        {
            second_min = a[i];
        }
    }
    return second_min;
}

int main()
{
    int n = 10;
    int a[10] = {23, 53, 67, 32, 7, 82, 43, 83, 92, 12};
    printf("The array is: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    int maximum = max(a, n);
    int minimum = min(a, n);
    int second_maximum = second_max(a, n);
    int second_minimum = second_min(a, n);
    printf("\nMaximum element in the array is %d\n", maximum);
    printf("Minimum element in the array is %d\n", minimum);
    printf("Second maximum element in the array is %d\n", second_maximum);
    printf("Second minimum element in the array is %d\n", second_minimum);
    return 0;
}
