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
    if(root == NULL || root->value == value) return root;

    if(value < root->value){
        return find(root->left,value);
    }else if(value > root->value){
        return find(root->right,value);
    }
}

// Função para encontrar o menor valor da árvore do lado direito
Node* find_Min_Value_IN_right_subtree(Node* root){
    // Preciso percorrer todo o lado direito e encontrar o menor valor.
    // Como o nó direito é o maior, dentro do nó direito, vou procurar todos
    // os elementos do lado esquerdo até encontrar o menor.
    while(root->left != NULL){
        root = root->left;
    }
    return root;
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
Node* delete(Node* root, int value){
    // Deletando valores

    // Alguns casos a se considerar, caso o eu remover um elemento
    // que é pai de um "filho", a estrutura da árvore muda
    // Se for somente os filhos a serem removidos, a estrutura da árvore permanece.
    
    // Verifica se a árvore já está vazia
    if(root == NULL) printf("\nRoot is empty");

    // Processo de remoção dos filhos
    // Casos a se considerar:
    // Caso 01: O nó só possui dois filhos
    // Caso 02: O nó só possui um filho
    // Caso 03: O nó não possui filho(s)
    if(value < root->value){
        root->left = delete(root->left,value);
    }else if(value > root->value){
        root->right = delete(root->right,value);
    }
}

// Função para imprimir à árvore
void printfTree(Node* root){

}