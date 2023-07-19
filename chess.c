#include<stdio.h>
void b_horse(int a[8][8]);
void w_horse(int a[8][8]);
void b_soldier(int a[8][8]);
int main()
{
    int a[8][8],s;
    printf ("enter coin\n");
    while(1)
    {
        printf("1-blackhorse\n");
        printf("2-whitehorse\n");
          printf("3- blacksoldier\n");
        printf("10-exit\n");
        scanf("%d",&s);
        switch (s)
        {
        case 1 :b_horse (a[8][8]);
                break;

        case 2 :w_horse (a[8][8]);
                break;

        case 3 : b_soldier(a[8][8]);
                break;

        case 10 :exit(0);

        }

    }

}
void b_horse(int a[8][8])
{
    int sum=a[0][4],i,j;
    for(i=0; i<2; i++)
    {
        for(j=0; j<4; j++)
        {
            sum =sum+a[i][j];
        }


    }
    printf("horse is at %d row  %d column \n ",i+1,j+1);

}
void w_horse(int a[8][8])
{
    int sum=a[0][4],i,j;
    for(i=0; i<6; i++)
    {
        for(j=0; j<4; j++)
        {
            sum =sum+a[i][j];
        }


    }
    printf("horse is at %d row  %d column \n ",i+1,j+1);

}
void b_soldier(int a[8][8])
{
    int rs=0,cs=0;
    for(int i=0;i<1;i++)
    {
        for(int j=0;j<8;j++)
        {
            rs=rs+1;
            cs=cs+1;
        }
    }
    printf("soldier is at %d row  %d column \n ",rs,cs);

}
