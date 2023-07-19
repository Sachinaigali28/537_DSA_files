#include <stdio.h>
int main() {
    FILE *fp;
    int matrix[10][10];
    int r,c;
    int i, j;
    int symmetric=1;
    fp = fopen("input1.txt","r");
    fscanf(fp,"%d\n",&r);
    fscanf(fp,"%d",&c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
        {
            fscanf(fp, "%d", &matrix[i][j]);
        }
    }
    fclose(fp);
    if (r!= c)
    {
       printf("matrix not equal");
       exit(0);
    }
    else
        {
        for (i = 0; i < r; i++)
            {
            for (j = 0; j < c; j++)
            {
                if (matrix[i][j] != matrix[j][i])
                {
                    symmetric = 0;
                    break;
                }
            }
            if (symmetric == 0)
            {
                break;
            }
        }
    }
    fp = fopen("outpu1.txt","w");
    if (symmetric==1)
    {
        printf("symmetric\n");
    }
    else
    {
        printf(" not symmetric\n");
    }
        fclose(fp);
        return 0;
}
