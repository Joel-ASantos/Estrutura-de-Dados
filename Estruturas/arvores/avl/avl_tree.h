# ifndef AVL_TREE

typedef struct{
    int value;
    struct Node* left;
    struct Node* right;
}Node;

Node* createNode(int value);
Node* deleteElement(Node* root,int value);
Node* findElement(Node* root,int value);
void insertElement(Node** root,int value);
void printALV_Tree(Node* root);

#endif