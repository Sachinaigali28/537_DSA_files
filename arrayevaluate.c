#include<stdio.h>
void read(int a[20]);
void display(int a[20]);
void duplicate(int a[20]);
int main()
{
    int a[20];
    read(a[20]);
    display(a[20]);
    duplicate(a[20]);
}

void read(int a[20])
{ printf("enter data\n");
    for(int i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[])
{
    for(int i=0;i<20;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void duplicate(int a[20])
{  int s,temp;
printf("duplicate elements\n");
    for(int i=0;i<20;i++)
    {  temp =a[i],s=0;
         for(int j=i+1;j<20;j++)
        {
          if(temp ==a[j])
        {
           // printf("d\t",a[i]);
            s++;

        }

       }
                printf(" frequency of %d is = %d\n",i+1,s);
    }




}
