#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 100
int top =-1;
char stack[SIZE];


void push(char item){
    if(top>=SIZE-1){
        printf("Stack overflow.");
    }
    else{
    top++;
    stack[top]=item;
    }
}
    
char pop(){
    char item;
    if(top==-1){
        printf("Stack underflow.");
    }
    else{
    item=stack[top];
    top--;
    
    return (item);
    }
}
int isoperator(char symbol){
        if(symbol == '^'|| symbol=='*'|| symbol=='/'|| symbol=='+'|| symbol=='-'){
            return 1;
        }
        else
        return 0;
}
int precedence(char symbol)
{
    if(symbol=='^'){
        return (3);
    }
    else if(symbol=='*'|| symbol=='/'){
        return (2);
    }
    else if(symbol=='+'|| symbol=='-'){
        return (1);
    }
    else{
    return (0);
    }
}
void infix_to_postfix(char infix_exp[],char postfix_exp[]){
        int i,j=0;
        char item,x;
        push('(');
        item = infix_exp[i];
        while (item!='\0')
        {
          if(item=='(')
          {
            push(item);
          }
          else if(isdigit(item)|| isalpha(item))
          {
            postfix_exp[j++]=item;
          }
          else if(isoperator(item)==1)
          {
            x=pop();
            while((isoperator(x)==1) && (precedence(x)>=precedence(item))){
                postfix_exp[j++]=x;
                x=pop();

            }
            push(x);
            push(item);
          }
          else if (item==')')
          {
            x=pop();
            while(x != '(')
            {
                postfix_exp[j++]=x;
                x=pop();
            }
          }
          else{
            printf("Invalid expression.");
     

          }
          i++;
          item = infix_exp[i];
        }
        if(top>0){
            printf("\nInvalid expression.");
   
        }
        postfix_exp[j]='\0';
        
         
}
int main(){
    char infix[SIZE],postfix[SIZE];
    printf("Enter the infix expression:");
    fgets(infix, SIZE, stdin);
    infix_to_postfix(infix,postfix);
    printf("postfix expression:");
    puts(postfix);
    return 0;
}