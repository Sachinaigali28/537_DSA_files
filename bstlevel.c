#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};


struct Node* createNode(int data)
 {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}


struct Node* insertNode(struct Node* root, int data)
{
    if (root == NULL)
    {
        root = createNode(data);
    }
    else if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}


int getHeight(struct Node* root)
{
    if (root == NULL)
        return 0;
    else
    {
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        if(leftHeight > rightHeight)
        {
              return (leftHeight + 1);
        }
        else
        {
           return  (rightHeight + 1);
        }


    }
}


int getNodeCount(struct Node* root)
 {
    if (root == NULL)
        return 0;
    else
        return (getNodeCount(root->left) + 1 + getNodeCount(root->right));
}


void writeToFile(struct Node* root, FILE* fp)
 {
    if (root != NULL)
    {
        fprintf(fp, "Level: %d\t", getHeight(root));
        fprintf(fp, "Number of nodes : %d\n", getNodeCount(root));
        writeToFile(root->left, fp);
        writeToFile(root->right, fp);
    }
}


void display(struct Node* root, const char* filename)
{
    FILE* fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    writeToFile(root, fp);
    fclose(fp);

}


int main()
 {
    struct Node* root = NULL;

    FILE* fp = fopen("Input.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    srand(time(NULL));

    int i;
    for (i = 0; i < 10; i++)
    {
        int data = rand() % 50;
        fprintf(fp, "%d\n", data);
        root = insertNode(root, data);
    }

    fclose(fp);
    display(root, "output.txt");

    return 0;
}

