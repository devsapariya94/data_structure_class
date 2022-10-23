#include <stdio.h>
void insert();
void delete ();
void display();
#define MAX 5
int arr[MAX];
int rear = 0;
int front = 0;
void main()
{
    int ans;
    while (1)
    {

        printf("If You Want to insert the Element in Queue Enter 1: \n");
        printf("If you want to delete the Element from Queue Enter 2: \n");
        printf("If you want to display the Element of Queue Enter 3: \n");
        printf("For Exit enter 4: \n");
        // scanf("%d", &ans);
        ans=1;
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
    
        if (rear == MAX - 1 && front==0)
            printf("Queue Overflow \n");
        else
        {
            if (rear=MAX-1 && front!=0){
                rear=0;
            }
            printf("Inset the element in queue : ");
            scanf("%d", &item);
            rear = rear + 1;
            arr[rear] = item;
        }
    
}

void delete ()
{
    if (rear == front)
    {
        printf("The Queue is empty\n");
    }
    else
    {
        arr[front] = 0;
        front = front + 1;
    }
}


void display(){
    for (int i = 0; i < MAX; i++)
    {
        printf("%d\n", arr[i]);
    }
}