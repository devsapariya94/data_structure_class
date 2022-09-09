#include <stdio.h>
#define MAX 5
void insert();
void delete ();
void display();
int arr[MAX];
int rear = -1;
int main()
{

    int ans;
    while (1)
    {
        printf("If You Want to insert the Element in Queue Enter 1: \n");
        printf("If you want to delete the Element from Queue Enter 2: \n");
        printf("If you want to display the Element of Queue Enter 3: \n");
        printf("For Exit enter 4: \n");
        scanf("%d", &ans);
        if (ans == 1)
        {
            insert();
        }

        else if (ans == 2)
        {
            delete ();
        }

        else if (ans == 3)
        {
            display();
        }

        else if (ans == 4)
        {
            break;
        }
    }
}

void insert()
{
    int item;
    if (rear == MAX - 1)
        printf("Queue Overflow \n");
    else
    {
        printf("Inset the element in queue : ");
        scanf("%d", &item);
        rear = rear + 1;
        arr[rear] = item;
    }
}
void delete ()
{
    if (rear >=0)
    {
        for (int i = 1; i < MAX; i++)
        {
            arr[i - 1] = arr[i];
        }

        arr[rear] = 0;
        rear = rear - 1;
    }
    else{
        printf("The Queue is Empty\n");
    }
}

void display()
{
    for (int i = 0; i < MAX; i++)
    {
        printf("%d\n", arr[i]);
    }
}