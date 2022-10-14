#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
int top=-1;
char stack[max];
int isEmpty(){
    if(top==-1)
    return 1;
    else
     return 0;
}
int isFull(){
    if (top == max -1){
        return 1;
    }
        else
        return 0;
    
}
void push(char c){
    if(isFull()){
        printf("Stack Overflow.");
      
    }
    top =top +1;
    stack[top]=c;
}
char pop(){
    char c;
    if(isEmpty()){
        printf("Stack underflow.");
        
    }
        else{
            c= stack[top];
            top--;
            return c;
        }
    
}

int match_char(char a,char b){
    if(a=='[' && b==']')
    return 1;
     if(a=='(' && b==')')
    return 1;
     if(a=='{' && b=='}')
    return 1;
    else
    return 0;
}
int check_balanced(char* s){
    char temp;
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i]=='(' || s[i]=='['|| s[i]=='{')
        push(s[i]);

        if(s[i]==')' || s[i]==']'|| s[i]=='}')
        {
            if(isEmpty()){
                printf("Right brackets are more than the left.\n");
                return 0;
            }else{
                temp = pop();
                if(!match_char(temp,s[i])){
                    printf("Mismatched brackets.\n");
                    return 0;
                }
            }
        }
    }
    if(isEmpty()){
        printf("Brackets are well balanced.\n");
        return 1;
    }
    else{
        printf("Left brackets are more than the right brackets.\n");
        return 0;
    }
    
}

int main()
{
    char expr[max];
    int balanced;
    printf("Enter the algebric expression.\n");
    fgets(expr, max, stdin);
    balanced==check_balanced(expr);
    if(balanced==1){
        printf("The expression is valid.");
    }
        else{
        printf("The expression is not valid");
        }
    
         
 return 0;
     
}


