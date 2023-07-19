#include <stdio.h>
void duplicate(int a[], int n);
void main() {
    int arr[20];
    int i;
    printf("Enter\n");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &arr[i]);
    }
    duplicate(arr,20);
}

void duplicate(int arr[], int n)
{
    int i, j;
    int freq[n];
    FILE *outputFile = fopen("output.txt", "w");

    for (i = 0; i < n; i++)
    {
        freq[i] = -1;
    }

    for (i = 0; i < n; i++)
        {
        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i]!= 0)
        {
            freq[i]=count;
        }
    }

    fprintf(outputFile, "Duplicate and frequency:\n");
    for (i=0;i<n;i++)
        {
        if (freq[i]>1)
        {
            fprintf(outputFile, "%d :  %d times \n", arr[i], freq[i]);
        }
    }

    fclose(outputFile);
}
