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
    no->right = NULL;
    no->left = NULL;
    return no;
}

// Função que vai deletar um elemento
Node* deleteElement(Node* root,int value){

}

// Encontrar um elemento na árvore
Node* findElement(Node* root,int value){

}

// Função que vai inserir elemento na árvore
void insertElement(Node** root,int value){

}

// Função que vai imprimir a árvore
void printALV_Tree(Node* root){

}