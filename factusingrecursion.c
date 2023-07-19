#include<stdio.h>
int fact(int n);
int  main()
{
    int n,a;
    scanf("%d",&n);
    a=fact(n);
    printf("%d\n",a);
}
int fact(int n)
{   int f;

    if (n==1)
    {
        return 1;

    }
    f=n*fact(n-1);
    return f;
}
