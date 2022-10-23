#include <stdio.h>

struct student
{
    int rollno;
    int marks;
    char name[20];
};

int main()
{
    struct student Dev;
    struct student *pointer;
    pointer = &Dev;
    pointer->rollno = 1;
    printf("\n%d", Dev.rollno);
    printf("\n%u" , &Dev.rollno);
    return 0;
}