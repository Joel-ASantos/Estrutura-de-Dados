// interface para à arvore
#ifndef BINARY_SEARCH_TREE
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node* right;
    struct Node* left;
}Node;

Node* createNodes(int value);
Node* find(Node* root, int value);
void insert(Node* root, int value);
void delete(Node* root, int value);
void printfTree(Node* root);

#endif