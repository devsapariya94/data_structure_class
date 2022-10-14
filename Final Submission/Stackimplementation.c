#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top=-1;

int push(int data){
    
    if(isFull()){
    printf("Stack Overflow!");
        
    }
    else
    top=top+1;
    stack_arr[top]=data;
}
int isFull(){
    if(top==MAX-1){
        return 1;
    }
    else return 0; 
}
int isEmpty(){
    if(top==-1){
        return 1;
    }else
    return 0;
}
int pop(){
    int data;
    if(isEmpty()){
        printf("\nStack Underflow");
        
    }
    else{
        data=stack_arr[top];
        top=top-1;
        return data;
    }
}
int peek(){
    if(isEmpty()){
        printf("Stack Underflow!\n");
        exit(1);
    }
    return stack_arr[top];
}
void print(){
    if(top==-1){
        printf("\n Stack Underflow");
        return;
    }
    for (int i = top; i >=0; i--)
    {
        printf("%d ",stack_arr[i]);
    }
    
}

int main()
{
    int choice,data;
    while(1){
        printf("\n");
        printf("1.Push\n");
        printf("2.pop\n");
        printf("3.Print the top element.\n");
        printf("4.Print all the element.\n ");
        printf("5.Quit\n");
        printf("\nEnter your choice.");
        scanf("%d",&choice);
        switch (choice)
{
case 1:
    printf("Enter the elemnt to be pushed:\n");
    scanf("%d",&data);
    push(data);
    break;
case 2:
    data=pop();
    printf("Deleted element is: %d\n",data);
    break;
case 3:
    printf("The topmost element of the stack is %d\n",peek());
    break;
case 4:
    print();
    break;
case 5:
    exit(1);
default:
    printf("Wrong Choice.\n");
    break;
}
    }
    
   return 0;
}