#include<stdio.h>
void read1(int *p,int r1 ,int c1 );
void display1(int *p,int r1 ,int c1 );
void read2(int *q,int r2 ,int c2 );
void display2(int *q,int r2 ,int c2 );
void multiplication(int *p,int r1 ,int c1,int *q,int r2 ,int c2,int *m );
int main()
{
    int a[20][20],b[20][20],r1,c1,r2,c2,*p,*q;
    p=&a[20][20];
    q=&a[20][20];
    printf("enter number of rows and column of 1st matrix \n");
    scanf("%d%d",&r1,&c1);
    printf("enter number of rows and column of 2nd matrix \n");
    scanf("%d%d",&r2,&c2);
    if (c1!=r2)
    {
        printf("multiplication not possible\n");
    }
    else

    read1(p,r1,c1);
    display1(p,r1,c1);
    read2(q,r2,c2);
    display2(q,r2,c2);
    int c[20][20],*m;
    m=&c[20][20];
    multiplication(p,q,r1,c1,r2,c2,m);
}
void multiplication(int *p,int r1 ,int c1,int *q,int r2 ,int c2,int *m )
{
    int i,j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {

        }
    }
}
void read1(int *p,int r1 ,int c1 )
{  printf ("enter 1st matrix\n");
    int i,j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",p);
            p++;

        }
    }
}
void display1(int *p,int r1 ,int c1 )
{  printf ("1st  matrix is\n");
    int i,j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",*p);
            p++;

        } printf("\n");
    }
}
void read2(int *q,int r2 ,int c2 )
{  printf ("enter 2nd matrix\n");
    int i,j;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",q);
            q++;

        }
    }
}
void display2(int *q,int r2 ,int c2 )
{  printf ("2nd  matrix is\n");
    int i,j;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",*q);
            q++;

        } printf("\n");
    }
}
