#include <stdio.h>

void main()
{
    int arr[5] = {39, 18, 64, 7, 10};
    for (int i = 0; i < 5; i++)
    {
        int min = arr[i];
        int index=i;
        for (int j = i + 1; j < 5; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
    for (int k = 0; k < 5; k++)
    {
        printf("%d \n", arr[k]);
    }
}