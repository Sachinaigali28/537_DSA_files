#include<stdio.h>

int main()
{
    int a[5][5],r,c ,i,j;
    FILE *fp1;
    fp1=fopen("read.txt","r");
    //fp2=fopen("read.txt","w");

    printf("enter number of rows and column\n");
    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            fscanf(fp1,"%d",&a[i][j]);
        }
    }


}







































