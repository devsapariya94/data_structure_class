#include <stdio.h>

int main()
{
    // pointer to array
    printf("pointer to array\n");
    int(*a)[5];
    int b[5] = {1, 2, 3, 4, 5};
    int i = 0;
    a = &b;

    for (i = 0; i < 5; i++)
{
        printf("Value of arr[%d] = %d\n", *(*a + i));
}


    //    array of pointer

    printf("\n\n\n Array of pointer");
    int arr[] = {1, 2, 3};
    int *ptr[3];

    for (i = 0; i < 3; i++)
    {
        ptr[i] = &arr[i];
    }

    for (i = 0; i < 3; i++)
    {

        printf("Value of arr[%d] = %d\n", i, *ptr[i]);
    }
    return 0;
}
