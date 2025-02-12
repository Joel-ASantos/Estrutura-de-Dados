#include <stdio.h>
#include <stdlib.h>
#include "avl_tree.h"

int max(int a, int b) {
    return (a > b) ? a : b;
}

int height(Node* node) {
    if (node == NULL) {
        return 0;
    }
    return node->height;
}

void updateHeight(Node* root) {
    if (root != NULL) {
        root->height = 1 + max(height(root->left), height(root->right));
    }
}

Node* createNode(int value) {
    Node* no = (Node*)malloc(sizeof(Node));
    no->value = value;
    no->height = 1;
    no->right = NULL;
    no->left = NULL;
    return no;
}

Node* rotateRight(Node* root) {
    Node* x = root->left;
    Node* T2 = x->right;

    x->right = root;
    root->left = T2;

    updateHeight(root);
    updateHeight(x);

    return x;
}

Node* rotateLeft(Node* root) {
    Node* y = root->right;
    Node* T2 = y->left;

    y->left = root;
    root->right = T2;

    updateHeight(root);
    updateHeight(y);

    return y;
}

int getBalance(Node* root) {
    if (root == NULL) {
        return 0;
    }
    return height(root->left) - height(root->right);
}

Node* balanceTree(Node* root) {
    int balanceFactor = getBalance(root);

    if (balanceFactor > 1) {
        if (getBalance(root->left) >= 0) {
            return rotateRight(root);
        } else {
            root->left = rotateLeft(root->left);
            return rotateRight(root);
        }
    }

    if (balanceFactor < -1) {
        if (getBalance(root->right) <= 0) {
            return rotateLeft(root);
        } else {
            root->right = rotateRight(root->right);
            return rotateLeft(root);
        }
    }

    return root;
}

void insertElement(Node** root, int value) {
    if (*root == NULL) {
        *root = createNode(value);
        return;
    }

    if (value > (*root)->value) {
        insertElement(&((*root)->right), value);
    } else if (value < (*root)->value) {
        insertElement(&((*root)->left), value);
    }

    updateHeight(*root);
    *root = balanceTree(*root);
}

Node* find_Min_Value_IN_right_subtree(Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

Node* deleteElement(Node* root, int value) {
    if (root == NULL) {
        printf("\nRoot is empty");
        return root;
    }

    if (value < root->value) {
        root->left = deleteElement(root->left, value);
    } else if (value > root->value) {
        root->right = deleteElement(root->right, value);
    } else {
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = find_Min_Value_IN_right_subtree(root->right);
        root->value = temp->value;
        root->right = deleteElement(root->right, temp->value);
    }

    updateHeight(root);
    return balanceTree(root);
}

void printALV_Tree(Node* root) {
    if (root != NULL) {
        printALV_Tree(root->left);
        printf("%d\t", root->value);
        printALV_Tree(root->right);
    }
}