#include <stdio.h>
void enque(int,int []);
void display(int []);
void deque(int []);
void isempty(int[]);
void isfull(int[]);
int beg=0;
int rear=-1;
int main()
{ 
    int a[10];
    enque(5,a);
    enque(6,a);
    enque(7,a);
    deque(a);
    deque(a);
    isempty(a);
    isfull(a);
    
    return 0;
}
void enque(int n,int a[]){
    if(rear!=10){
        rear++;
        a[rear]=n;
        printf("Queue\n");
        display(a);
    }
    else{
        printf("Overflow\n");
    }
}
void display(int a[])
{
    if(beg!=-1)
    {
        for(int i=beg;i>=beg && i<=rear;i++){
            
            printf("%d\n",a[i]);
        }
    }
    
}
void deque(int a[])
{
    if(beg!=-1)
    {   
        beg++;
        printf("Queue\n");
        display(a);
    }
}
void isempty(int a[])
{
    if(beg==-1)
    {
        printf("empty\n");
    }
    else
    printf("not empty\n");
}
void isfull(int a[])
{
    if(beg==10)
    {
        printf("full\n");
    }
    else
    printf("not full\n");
}