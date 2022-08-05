#include<stdio.h>
void main()
{
    int i,j,a[5];
    
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
            }
            for(i=0;i<=9;i++)

{
    if(a[i]>a[i+1])
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
}
  for(i=0;i<=9;i++)

{
    printf("%d",a[i]);
}

}