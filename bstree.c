#include <stdio.h>
#include <stdlib.h>
typedef struct Node
 {
    int data;
    struct Node* left;
    struct Node* right;
} Node;


Node* createNode(int data)
 {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insertNode(Node* root, int data)
 {
    if (root == NULL)
    {
        root = createNode(data);
        return root;
    }

    if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}

int findLevels(Node* root)
{
    if (root == NULL)
    {
        return 0;
    } else
    {
        int leftDepth = findLevels(root->left);
        int rightDepth = findLevels(root->right);

        if (leftDepth > rightDepth)
        {
            return (leftDepth + 1);
        } else {
            return (rightDepth + 1);
        }
    }
}

void countNodesPerLevel(Node* root, int level, int* count, FILE* outputFile)
 {
    if (root == NULL) {
        return;
    }

    if (level == 1)
    {
        (*count)++;
    }
    else if (level > 1)
    {
        countNodesPerLevel(root->left, level - 1, count, outputFile);
        countNodesPerLevel(root->right, level - 1, count, outputFile);
    }
}

Node* generateRandomTree(int n) {
    Node* root = NULL;
    int i, num;
    FILE* inputFile = fopen("input.txt", "w");
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        num = rand() % 50;
        fprintf(inputFile,"%d\n ", num);
        root = insertNode(root, num);
    }

    fclose(inputFile);
    return root;
}

int main() {
    int n, i;
    FILE* inputFile = fopen("input.txt", "r");
    FILE* outputFile = fopen("output.txt", "w");

    fscanf(inputFile, "%d", &n);
    Node* root = generateRandomTree(n);
    fclose(inputFile);

    int levels = findLevels(root);
    fprintf(outputFile, "Total no.of levels: %d\n", levels);

    for (i = 1; i <= levels; i++) {
        int count = 0;
        countNodesPerLevel(root, i, &count, outputFile);
        fprintf(outputFile, "Level %d: %d nodes\n", i, count);
    }
    printf( "tree is \n");
     print( root,0);
    fclose(outputFile);
    return 0;
}
void print(Node* root, int level)
{
    if (root == NULL) {
        return;
    }

    print(root->right, level + 1);

    for (int i = 0; i < level; i++) {
        printf("\t");
    }

    printf("%d\n", root->data);

    print(root->left, level + 1);
}
