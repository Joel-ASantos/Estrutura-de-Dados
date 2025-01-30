#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

// Funções para árvore binária de busca

// Criação dos nós da árvore
Node* createNodes(int value){
    Node* no = (Node*)malloc(sizeof(Node));
    no->head = NULL;
    no->right = NULL;
    no->left = NULL;
    no->value = value;
}

// Função para encontrar um valor especifico na árvore
Node* find(Node* root, int value){

}

// Função para inserção de valores para à árvore
void insert(Node* root, int value){
    // Inserindo valores
    // No entanto, preciso verificar se existe uma raíz para iniciar o processo
    // Caso não exista a cabeça ou "raíz" vai ser receber um valo.
    if(root->head == NULL) root->head = value;

    // Começar o processo de alocar o valor com no seu devido lugar
    /*
        if(root->left == NULL && value < root->head){
            root->left = value;
        }else if(root->right == NULL && value > root->head){
            root->right = value;
        }
    */
    if(root->left == NULL && value < root->head){
        insert(&(root->left),value);
    }else if(root->right == NULL && value > root->head){
        insert(&(root->right),value);
    }
}

// Função para deletar um elemento na árvore
void delete(Node* root, int value){

}

// Função para imprimir à árvore
void printfTree(Node* root){

}