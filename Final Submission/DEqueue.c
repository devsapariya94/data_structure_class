#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueuerear(int x){
    if(rear==N-1){
        printf("Overflow");
    }
    else if(front==-1 && rear==-1) 
     //queue is empty.
     {
        front=0;
        rear=0;
        queue[rear]=x;
     }
     else{
        rear++;
        queue[rear]=x;
     }
}
void dequeuefront(){
    int x;
    if(front==-1 && rear==-1){
        printf("Queue is empty.");
    }
    //only one element in the queue.
    else if(front==rear)
    {
        front = rear=-1;
    }else{
            front++;
        
    }
}
void enqueuefront(int x){
    if(front==0 && rear==N-1){
        printf("Queue is full.");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
    }
    
    else{
        front--;
        queue[front]=x;
    }
       
}
void dequeuerear(){
    int x;
    
    if(front==-1 && rear==-1){
        printf("Queue is empty.");
    }
    
     if(front == rear){
        front=-1;
        rear=-1;
    }else{
    queue[rear]=x;
    rear--;
    }
}
void display(){
    if(front==-1 && rear==-1){
        printf("Queue is empty.");
    }
    for (int  i = front; i <=rear ; i++)
    {
        printf("%d-",queue[i]);
    }
    
}
int main()
{   //inserting 3,4,8 & 7 to the queue...
    enqueuerear(3);
    enqueuerear(4);
    enqueuerear(8);
    enqueuerear(7);
    
    display();
    enqueuefront(34); //inserting 34 from the front.
        printf("\nInserting 34 from the front:");
    display();
    dequeuerear();
    printf("\nDeleting the element from the rear:");
    display();
    dequeuefront();
    printf("\nDeleting the lement from the front:");
    display();
    
    return 0;
}