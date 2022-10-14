#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX];
char infix[MAX],postfix[MAX];
int top=-1;
int push(int val){
    if(top==MAX-1){
        printf("Stack Overflow.");
    }else
    top++;
    stack[top]=val;
    return 0;
}
char pop(){
    int val;
    if(top==-1){
        printf("Stack underflow");
    }else
val=stack[top];
top--;
return val;
}
int post_eval(){
    int i;
    int a,b;
    for ( i = 0; i < strlen(postfix); i++)
    {
        if(postfix[i]>='0' && postfix[i]<='9'){
            push(postfix[i]-'0');
        }else
        {
            a=pop();
            b=pop();
            switch (postfix[i])
            {
            case '+':
                push(b+a);
                break;
            case '-':
                push(b-a);
                break;
            case'*':
                push(b*a);
                break;
            case'/':
                push(b/a);
            case '^':
                push(pow(b,a));
                break;
            
            }
        }
    }
    return pop();
}

int main(){
    int result;
    printf("Enter the postfix expression:");
    gets(postfix);
    post_eval();
    result = post_eval();
    printf("The result obtained after postfix evaluation is:");
    printf("%d\n",result);
    return 0;
}