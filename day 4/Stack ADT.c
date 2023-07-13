#include <stdio.h>
void push(int,int []);
void display(int []);
void pop(int []);
void isempty(int[]);
void isfull(int[]);
int top=-1;
int main()
{ 
    int a[10];
    push(5,a);
    push(6,a);
    push(7,a);
    pop(a);
    pop(a);
    isempty(a);
    isfull(a);
    
    return 0;
}
void push(int n,int a[]){
    if(top!=10){
        top++;
        a[top]=n;
        printf("stack\n");
        display(a);
    }
    else{
        printf("Overflow\n");
    }
}
void display(int a[])
{
    if(top!=-1)
    {
        for(int i=top;i>=0;i--){
            
            printf("%d\n",a[i]);
        }
    }
    
}
void pop(int a[])
{
    if(top!=-1)
    {   
        top--;
        printf("stack\n");
        display(a);
    }
}
void isempty(int a[])
{
    if(top==-1)
    {
        printf("empty\n");
    }
    else
    printf("not empty\n");
}
void isfull(int a[])
{
    if(top==10)
    {
        printf("full\n");
    }
    else
    printf("not full\n");
}





















