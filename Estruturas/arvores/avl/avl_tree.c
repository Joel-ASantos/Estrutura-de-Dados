#include <stdio.h>
#include <stdlib.h>
#include "avl_tree.h"

// OBS: À árvore AVL é que nem a árvore binária de busca,
// só que com uma diferença, o AVL é uma árvore binária de busca
// com auto-equilíbrio onde as diferenças entre as sub-árvores da direita
// e esquerda é de um um nó, nem para mais nem para menos.

// Função que cria uma árvore
Node* createNode(int value){
    Node* no = (Node*)malloc(sizeof(Node));
    no->value = value;
    no->height = NULL;
    no->right = NULL;
    no->left = NULL;
    return no;
}

// Função que vai deletar um elemento
Node* deleteElement(Node* root,int value){

}

// Função para encontrar um elemento na árvore
Node* findElement(Node* root,int value){

}

// Função para atualizar a altura da árvore
void updateHeight(Node* root){

}

// Função que vai balancear a árvore
Node* balanceTree(Node* root){

}

// Função para fazer a rotação para direita
Node* rotateRight(Node* root){

}

// Função para fazer a rotação para esquerda
Node* rotateLeft(Node* root){

}

// Função que vai inserir elemento na árvore
void insertElement(Node** root,int value){
    // Questões a se considerar:
    // Preciso implementar nesta função algum meio de
    // auto-balancear a árvore, o que deve tornar essa função
    // mais complexa do que a BST.
    
    // Adicionando o primeiro valor, que vai ser a raiz
    if(*root == NULL){
        *root = createNode(value);
    }
    // Fazendo o insert
    if(value > (*root)->value){
        insertElement(&((*root)->right),value);
    }else if(value < (*root)->value){
        insertElement(&((*root)->left),value);
    }
}

// Função que vai imprimir a árvore
void printALV_Tree(Node* root){
    if(root != NULL){
        printf("%d\t", root->right);
        printALV_Tree(root);
        printf("%d \t",root->left);
    }
}