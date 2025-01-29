#include<stdio.h>
#include<stdlib.h>
#include "hash.h"

// Estrutura de Dados: Hash Map

// A estrutura de dados hash map, ou também conhecida
// como tabela hash, é conhecida pelo capacidade de armazenar
// pares de chave-valor. É uma forma bastante eficiente de
// acessar os valores associados às chaves.

// Teste 08
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

    // remobendo elemento
    removeElement(table,5);
    printHashTABLE(table);
    return 0;
}