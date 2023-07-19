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
    int i,n,ch,temp,c=0,m,arr[MAX];
    s.top = -1;
    while(1)
    {
        printf("1--push\n");
        printf("2--pop\n");
        printf("3--peek\n");
        printf("4--exit\n");
        printf("enter operation\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1 : while(fscanf(fp,"%d",&arr[c])!=EOF)
                      c++;
                   {
                     pop(&s);
                   }
                   break;
        case 2 :  fp=fopen("popfile.txt","w");
            {
               m=arr[i];
               fprintf(fp,"%d\n",m);
               push(&s);

            }
            break;
        case 3 :
            //printf("peek element = %d\n",peek(&s));
            break;
        case 4 :
            exit(0);
            break;
        }
    }
    fp = fopen("inputfile.txt","r");
   /* while(fscanf(fp,"%d",&arr[c])!=EOF)
        c++;
    {
        pop(&s);
    }*/

    for(i=0; i<c; i++)
    fclose(fp);
    /*fp=fopen("popfile.txt","w");
    {
        m=arr[i];
        fprintf(fp,"%d\n",m);
        push(&s);

    }*/
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
