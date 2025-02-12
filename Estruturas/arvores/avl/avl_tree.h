# ifndef AVL_TREE

typedef struct{
    int value;
    struct Node* left;
    struct Node* right;
    struct Node* height;
}Node;

Node* createNode(int value);
Node* balanceTree(Node* root);
Node* deleteElement(Node* root,int value);
Node* findElement(Node* root,int value);
void insertElement(Node** root,int value);
void printALV_Tree(Node* root);
void updateHeight(Node* root);

#endif