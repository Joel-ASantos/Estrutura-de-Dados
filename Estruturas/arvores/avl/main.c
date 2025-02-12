#include <stdio.h>
#include <stdlib.h>
#include "avl_tree.h"

// Estrutura de Dados: Árvore Binária 
// Tipo: AVL

// Às árvores binárias são estruturas de dados hierárquicas, onde
// cada nó tem pelo menos dois filhos, denominados de filho da esquerda
// ou direita. Bom, essa estrutura de dados possui alguns tipos, e dentre
// desses tipos se encontra o AVL. O AVL, é semelhante a árvore binária de busca
// (que é outro tipo de árvore binária), só com um diferencial, o AVL é auto-equilibrado,
// onde a diferença do tamanho das sub-árvores não pode ser maior que um nó, mantendo
// a árvore balanceada.

int main(int* argc, char argv[]){

    // Criando a árvore
    Node* root = NULL;

    // Inserindo valores
    insertElement(&root,100);
    insertElement(&root,150);
    insertElement(&root,78);
    insertElement(&root,125);
    insertElement(&root,160);
    insertElement(&root,56);
    insertElement(&root,89);
    insertElement(&root,90);
    insertElement(&root,95);
    insertElement(&root,12);

    // imprimindo a árvore
    printALV_Tree(root);

    return 0;
}