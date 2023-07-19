#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct stack
{
    int data[100];
    int top;

} stack ;

void push(stack *s);
int pop(stack *s);
int main()
{
    FILE *fp;
    stack s;
    int i,n,temp,c=0,m,arr[MAX];

    s.top=-1;

    fp = fopen("test1.txt","r");
    while(fscanf(fp,"%d",&arr[c])!=EOF)
    {
        c++;
        pop(&s);




    }
    fclose(fp);

    fp=fopen("test2.txt","w");
    for(i=0; i<c; i++)
    {
        m=2*arr[i];
        fprintf(fp,"%d\n",m);
        push(&s);

    }
    fclose(fp);
    return 0;

}
void push (stack *s)
{
    if (s->top<100)
    {
        s->top++;


    }

}
int pop(stack *s)
{
    int temp;
    temp=s->data[s->top];

 s->top--;

     for(int i=0;i<=s->top;i++)
    {
        printf("%d\t",s->data[i]);
    }
        return temp;



}
