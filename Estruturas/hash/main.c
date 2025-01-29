#include<stdio.h>
#include<stdlib.h>
#include "hash.h"

// Estrutura de Dados: Hash Map

// A estrutura de dados hash map, ou também conhecida
// como tabela hash, é conhecida pelo capacidade de armazenar
// pares de chave-valor. É uma forma bastante eficiente de
// acessar os valores associados às chaves.

// Teste 15
// Criação da Tabela Hash 

int main(int* argc, char argv[]){
    // criando tabela hash
    Hash_Table* table = (Hash_Table*)malloc(sizeof(Hash_Table));
    for(int i = 0;i < HASH_SIZE; i++) table->bucket[i] = NULL;

    // inserindo elementos
    insertElement(table, 1, "Mariana");
    insertElement(table, 2, "Lucia");
    insertElement(table, 3, "Carlos");
    insertElement(table, 4, "Joel");
    insertElement(table, 5, "Nicolas");
    insertElement(table, 6, "Pedro");
    insertElement(table, 7, "Lucas");
    insertElement(table, 8, "Augusto");
    insertElement(table, 9, "Vanessa");
    insertElement(table, 10, "Maria");
    
    printf("Hash Map before remove function\n");
    printHashTABLE(table);
    
    printf("\n");

    // removendo elemento
    removeElement(table,5);
    printf("Hash Map after remove function\n");
    printHashTABLE(table);

    // buscando elemento
    searchElement(table,1);

    // liberando memória
    freeMemory(table);
    return 0;
}