#include <stdio.h>

struct Organization{
    char name[20];
    int id;

    struct Employee{
        int id;
        int salary;
        char name[20];
    }Employee[2];

};

int main(){
    struct Organization o1;
    printf("Enter the name of the organization: ");
    scanf("%s", o1.name);
    printf("Enter the ID of the organization: ");
    scanf("%d", &o1.id);

    for(int i = 0; i < 2; i++){
        printf("Enter the name of the employee: ");
        scanf("%s", o1.Employee[i].name);
        printf("Enter the ID of the employee: ");
        scanf("%d", &o1.Employee[i].id);
        printf("Enter the salary of the employee: ");
        scanf("%d", &o1.Employee[i].salary);
    }

    struct Organization o2;
    printf("Enter the name of the organization: ");
    scanf("%s", o2.name);
    printf("Enter the ID of the organization: ");
    scanf("%d", &o2.id);

    for(int i = 0; i < 2; i++){
        printf("Enter the name of the employee: ");
        scanf("%s", o2.Employee[i].name);
        printf("Enter the ID of the employee: ");
        scanf("%d", &o2.Employee[i].id);
        printf("Enter the salary of the employee: ");
        scanf("%d", &o2.Employee[i].salary);
    }

    printf("The name of the organization is: %s\n", o1.name);
    printf("The ID of the organization is: %d\n", o1.id);
    for(int i = 0; i < 2; i++){
        printf("The name of the employee is: %s\n", o1.Employee[i].name);
        printf("The ID of the employee is: %d\n", o1.Employee[i].id);
        printf("The salary of the employee is: %d\n", o1.Employee[i].salary);
    }
    
    printf("The name of the organization is: %s\n", o2.name);
    printf("The ID of the organization is: %d\n", o2.id);
    for(int i = 0; i < 2; i++){
        printf("The name of the employee is: %s\n", o2.Employee[i].name);
        printf("The ID of the employee is: %d\n", o2.Employee[i].id);
        printf("The salary of the employee is: %d\n", o2.Employee[i].salary);
    }
}