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

Node* find_Min_Value_IN_right_subtree(Node* root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

// Função que vai deletar um elemento
Node* deleteElement(Node* root,int value){
    if(root == NULL){
        printf("\nRoot is empty"); 
        return root;
    } 

    if(value < root->value){
        root->left = delete(root->left,value);
    }else if(value > root->value){
        root->right = delete(root->right,value);
    }else{
        // Caso o nó não possui filhos ou um único filho:
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }

        // Caso o nó só possui dois filhos
        Node* temp = find_Min_Value_IN_right_subtree(root->right);
        root->value = temp->value;
        root->right = delete(root->right,temp->value);
    }
    return root;
}

// Função para encontrar um elemento na árvore
Node* findElement(Node* root,int value){
    if(root == NULL){
        printf("\nError");
        return NULL;
    }else{
        if(root->value == value){
            printf("value found: %d",root->value);
            return root;
        }else{
            if(root->value > value){
                findElement(root->left,value);
            }else{
                findElement(root->right,value);
            }
        }
    }
}

// Função para atualizar a altura da árvore
void updateHeight(Node* root){
    while(root != NULL){
        root->height = max(height(root->left), height(root->right)) + 1;
    }
}

// Função auxiliar para o balanceamento da árvore
Node* getBalance(Node* root){
    // fator de balanceamento: (tamanho da árvore da esquerda - tamanho da árvore da direita)
    if(root == NULL){
        printf("\nTree whitout sub tree's");
    }
    return height(root->left) - height(root->right) ;
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