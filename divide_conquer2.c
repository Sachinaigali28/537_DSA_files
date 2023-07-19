#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    recursion(n);
}
void recursion(int n)
{
    if (n>0)
    { for(int i=0;i<n;i++)
    {

        printf("%d\t",n);
    }
        recursion(n-1);
    }
}

