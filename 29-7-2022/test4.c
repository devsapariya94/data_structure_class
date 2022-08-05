#include <stdio.h>

void main()
{
    int arr[10] = {42, 89, 7, 67, 83, 15, 53, 37, 70, 23};

    for (int i = 0; i < 10; i++)
    {
        int temp = arr[i];
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > temp)
            {
                for (int k = i; k > j; k--)
                {
                    arr[k] = arr[k - 1];
                }
                arr[j] = temp;
                break;
            }
        }
    }

    for (int k = 0; k < 10; k++)
    {
        printf("%d \n", arr[k]);
    }
}