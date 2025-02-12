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

int main(int argc, char* argv[]){

    // Criando a árvore
    Node* root = NULL;

    // Inserindo valores
    insertElement(&root, 10);
    insertElement(&root, 5);
    insertElement(&root, 15);
    insertElement(&root, 3);
    insertElement(&root, 8);
    insertElement(&root, 2);

    // Deletando elementos
    printf("Tree before remove:\t");
    printALV_Tree(root);
    root = deleteElement(root,15);

    // Árvore após a remoção
    printf("\nTree after Remove:\t");
    printALV_Tree(root);

    return 0;
}