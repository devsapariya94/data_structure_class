#include <stdio.h>

void main()
{
    int arr[10] = {42, 89, 7, 67, 83, 15, 53, 37, 70, 23};

    for (int j =0; j<10; j++){

    
    for (int i = 0; i < 10-j; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    }
    for (int k = 0; k < 10; k++)
    {
        printf("%d \n", arr[k]);
    }
}