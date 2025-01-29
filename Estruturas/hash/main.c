#include<stdio.h>
#include<stdlib.h>
#include "hash.h"

// Estrutura de Dados: Hash Map

// A estrutura de dados hash map, ou também conhecida
// como tabela hash, é conhecida pelo capacidade de armazenar
// pares de chave-valor. É uma forma bastante eficiente de
// acessar os valores associados às chaves.

// Teste 06
// Criação da Tabela Hash 


void printHashTABLE(Hash_Table* table){
    for(int i = 0; i < HASH_SIZE; i++){
        if(table->bucket[i] != NULL){
            printf("\nBucket: Chave= %d Valor= %s",table->bucket[i]->key,table->bucket[i]->object);
        }else{
            printf("Bucket vazio");
        }
    }
}

int main(int* argc, char argv[]){
    // criando tabela hash
    Hash_Table* table;
    
    // inserindo elementos
    insertElement(table, 1, "Mariana");
    insertElement(table, 2, "Lúcia");
    insertElement(table, 3, "Carlos");
    insertElement(table, 4, "Joel");
    insertElement(table, 5, "Nicolas");

    // remobendo elemento
    removeElement(table,5);
    printHashTABLE(table);
    return 0;
}