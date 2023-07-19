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
    {
        printf("%d\t",n);
        recursion(n-1);
        recursion(n-1);
    }
}

