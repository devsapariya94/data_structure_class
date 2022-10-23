#include <stdio.h>

struct Student{
    char name[20];
    int roll;
    char address[50];
};

int main(){
    struct Student s2[5];
    for(int i = 0; i < 5; i++){
        printf("Enter the name of the student: ");
        scanf("%s", s2[i].name);
        printf("Enter the roll number of the student: ");
        scanf("%d", &s2[i].roll);
        printf("Enter the address of the student: ");
        scanf("%s", s2[i].address);
    }

    for(int i = 0; i < 5; i++){
        printf("The name of the student is: %s\n", s2[i].name);
        printf("The roll number of the student is: %d\n", s2[i].roll);
        printf("The address of the student is: %s\n", s2[i].address);
    }
}