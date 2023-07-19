
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;


TreeNode* createNode(int data) {
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

void preorderTraversal(TreeNode* root, FILE* file) {
    if (root != NULL) {
        fprintf(file, "%d\n", root->data);
        preorderTraversal(root->left, file);
        preorderTraversal(root->right, file);
    }
}

void inorderTraversal(TreeNode* root, FILE* file) {
    if (root != NULL) {
        inorderTraversal(root->left, file);
        fprintf(file, "%d\n", root->data);
        inorderTraversal(root->right, file);
    }
}

void postorderTraversal(TreeNode* root, FILE* file) {
    if (root != NULL) {
        postorderTraversal(root->left, file);
        postorderTraversal(root->right, file);
        fprintf(file, "%d\n", root->data);
    }
}

int main() {
    FILE* fp = fopen("Input.txt", "w");

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

    FILE* output = fopen("preorder.txt", "w");
    if (output == NULL) {
        printf("Error opening the output file.\n");
        return 1;
    }

    preorderTraversal(root, output);



    fclose(output);




 output = fopen("inorder.txt", "w");
    inorderTraversal(root, output);
    fclose(output);




//OPERATION OF POSTORDER

 output = fopen("postorder.txt", "w");
    postorderTraversal(root, output);
    fclose(output);


    return 0;
}
