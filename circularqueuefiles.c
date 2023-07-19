#define N 10
#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data[N];
    int front;
    int rear;
};
void dequeue(struct queue *q );
void enqueue(struct queue *q );
main()
{  int ch,n;
    struct queue q;
    FILE *fp;
    q.front = -1;
    q.rear = -1;
    int array[N],s=0;
    fp=fopen("input.txt","r");
    while(fscanf(fp,"%d",&array[s])!=EOF)
    {
       s++;
       dequeue(&q);
    }
    fclose(fp);

    fp = fopen("output.txt","w");
    for(int i=0;i<s;i++)
    {
        fprintf(fp,"%d\n",array[i]);
        enqueue(&q);
    }
    fclose(fp);
    return 0;

}

void enqueue( struct queue *q )

{
    if ((q->rear+1) % N == q->front)
        printf("\nQueue is Full\n");
    else if(q->front==-1 && q->rear == -1 )
    {
        q->front=0;
        q->rear = 0;
    }
    else
    {
        q->rear=(q->rear +1)%N;
    }
}

void dequeue(struct queue *q )
{
    if (q->front == q->rear)
    {
       q->front=-1;
       q->rear=-1;
     }
   else
    {
        q->front=(q->front+1)% N;
    }
}



