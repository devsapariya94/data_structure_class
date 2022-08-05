#include <stdio.h>

struct student
{
    int rollno;
    char name[10];
    int maths_marks[3];
    int total;
    float percentage;
};
struct student studentarr[3];
void input()
{
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the Rollno: ");
        scanf("%d", &studentarr[i].rollno);
        printf("\n Enter the Name: ");
        scanf("%s", studentarr[i].name);
        int mark[3];
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Marks of subject: ");
            scanf("%d", &studentarr[i].maths_marks[j]);
            printf("\n");
        }
    }
}


void find_percent()
    {
        for (int i = 0; i < 3; i++)
        {
            studentarr[i].total=0;
            for (int j = 0; j < 3; j++)
            {
                studentarr[i].total=studentarr[i].maths_marks[j]+studentarr[i].total;
            }
            float temp= (float)studentarr[i].total/300;
            float percent= (temp*100);
            studentarr[i].percentage= percent;
        }
        
    }

void display_percentage(){
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", studentarr[i].total);
        printf("percentage of %s: ", studentarr[i].name);
        printf("%d \n",studentarr[i].percentage);
    }
    
}

void main()
{

    input();
    find_percent();
    display_percentage();
}