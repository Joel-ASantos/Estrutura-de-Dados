#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

// Estrutura de Dados: Árvore Binária de Busca

// À estrutura de dados chamada de árvore binária, é
// um estrutura hierárquica onde cada nó possui um ou dois filhos.
// Esses filhos são referidos como filho da direita ou esquerda, onde
// os mesmos são posicionados conforme o seu valor, em relação ao nó
// que os gerou, chamado de raiz. Os valores maiores em relação ao nó
// raiz são alocados na direita, e os menores à esquerda. No fim da estrutura, os valores presentes ali
// são chamados de folhas da árvore. Essa estrutura possui vários tipos, e a que foi
// feita é chamada de árvore binária de busca. Esse tipo, é uma forma de armazenar os valores de forma
// organizada. Esse tipo de árvore permite algumas operações, que são a inserção de um elemento, a remoção e
// a busca de um elemento específico.

int main(int* argc, char argv[]){
    // Criando a árvore
    Node* root = NULL;

    // inserindo valores na árvore
    insert(&root, 100);
    insert(&root, 91);
    insert(&root, 150);
    insert(&root, 125);
    insert(&root, 89);
    insert(&root, 45);

    // Imprimindo os valores da árvore
    printf("Tree Before remove:");
    printfTree(root);

    // Removendo elemento da árvore
    delete(root,100);
    printf("\nTree after remove");
    printfTree(root);

    // Encontrando um elemento
    find(root,89);
    return 0;
}