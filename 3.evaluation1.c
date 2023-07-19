
#include<stdio.h>

void read1(int *p,int r1 ,int c1 );
void display1(int *p,int r1 ,int c1 );
void read2(int *q,int r2 ,int c2 );
void display2(int *q,int r2 ,int c2 );
void multiplication(int *p,int r1 ,int c1,int *q,int r2 ,int c2,int *m );
int main()
{
    int r1,c1,r2,c2;

    printf("enter number of rows and column of 1st matrix \n");
    scanf("%d%d",&r1,&c1);
    printf("enter number of rows and column of 2nd matrix \n");
    scanf("%d%d",&r2,&c2);
    int a[r1][c1],b[r2][c2],*p,*q;
     p=&a[r1][c1];
     q=&b[r2][c2];
      if (c1!=r2)
    {
        printf("multiplication not possible\n");
    }
    else

    read1(p,r1,c1);
    display1(p,r1,c1);
    read2(q,r2,c2);
    display2(q,r2,c2);
    int d[r1][c2],*m;
    m=&d[r1][c2];
    multiplication(p,q,r1,c1,r2,c2,m);
}
void multiplication(int *p,int r1 ,int c1,int *q,int r2 ,int c2,int *m )
{
    int i,j,k,*u,*v;


    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
         for(k=0;k<c1;k++)
         {  u=& a[i][k];
           v=&b[k][j];

             *m=*m+(*u)*(*v);
         }
        }
    }
    display(m,r1,c2);
}
void read1(int *p,int r1 ,int c1 )
{  printf ("enter 1st matrix\n");
    int i,j,*u,*b;

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
