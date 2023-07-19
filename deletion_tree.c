
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

struct TreeNode *temp;
TreeNode* createNode(int data)
{
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


TreeNode* insertNode(TreeNode* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }
    return root;
}



int main() {
    FILE* fp = fopen("Input.txt", "w");
     int array[10],s=0,key;
     printf("enter element to delete\n");
     scanf("%d",&key);

    if (fp == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    srand(time(NULL));

    int i;
    for (i = 0; i < 10; i++) {
        int randomNumber = rand() % 100;
        fprintf(fp, "%d\n", randomNumber);
    }

    fclose(fp);

    FILE* input = fopen("Input.txt", "r");
    if (input == NULL) {
        printf("Error opening the input file.\n");
        return 1;
    }

    TreeNode* root = NULL;

    int number;
    while (fscanf(input, "%d", &number) == 1) {
        root = insertNode(root, number);
    }

    fclose(input);
    FILE* output = fopen("output.txt", "r");
     while(fscanf(output,"%d",&array[10])!=EOF)
    {
       if (key==array[i])
       {
           root = deleteNode(root, key);
           break;

       }
       else
        printf("not found\n");
    }

    fclose(output);

    return 0;
}
TreeNode* deleteNode(TreeNode* root, int key)
{
    if (root == NULL) {
        return NULL;
    }
    if (key < root->data)
    {
        root->left =temp;
        free(temp);
        deleteNode(root->left, key);
    }
    else if (key> root->data)
        {
        root->right =temp;
          free(temp);
         deleteNode(root->right, key);
    }
    return root;
}

