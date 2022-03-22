#include <stdio.h>
#include <conio.h>
struct stack
{
    int arr[5];
    int tos;
};
void push(struct stack *,int);
int pop(struct stack *);


int main()
{
struct stack s;
int choice,x;
system("cls");
s.tos=-1;

do{
    printf("select your option\n");
    printf("\n1.push\n2.pop\n3.quit\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("enter puse ele\n");
               scanf("%d",&x);
               push(&s,x);
               break;
        case 2: x=pop(&s);
               if(x!=-1)
               printf("poped ele are %d\n",x);
               break; 
        case 3: choice=0;
                break;
        default: printf("wrong choice try again");
                  break;

    }
}while(choice!=0);
    return 0;
}
void push(struct stack *p, int x)
{
    if(p->tos==4)
    {
        printf("stack is overflow\n");
        return;
    }
    p->tos=p->tos+1;
    p->arr[p->tos]=x;
    printf("pushed ele are %d\n",x);

}
int pop(struct stack *p)
{
    int x;
    if(p->tos==-1)
    {
        printf("stack is underflow");
        return-1;

    }
    x=p->arr[p->tos];
    p->tos=p->tos-1;
    return x;

}