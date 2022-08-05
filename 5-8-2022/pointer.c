#include <stdio.h>

void main (){

    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n",arr[i]);
    }
    
    
}