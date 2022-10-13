#include <stdio.h>

struct student
{
    char name[20];
    int roll;
    char address[50];
};


int main(){
    struct student s[5];
    printf("Enter details of 5 students:\n");
    for(int i=0;i<5;i++){
        printf("Enter the name of %d student: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter the roll of %d student: ",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter the address of %d student: ",i+1);
        scanf("%s",s[i].address);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The name of %d student is %s\n",i+1,s[i].name);
        printf("The roll of %d student is %d\n",i+1,s[i].roll);
        printf("The address of %d student is %s\n",i+1,s[i].address);

    }
    
    return 0;
}