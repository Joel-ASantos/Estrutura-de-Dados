#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.h"

// Funções para o Hash Map

// Funçõo para inserção de um elemento
int insertElement(Hash_Table* table, int key, const char* object){
    // calculo que vai ser usado pra posição do vetor
    int index = key % HASH_SIZE;

    // Verificando se já tem alguém nessa posição
    if(table->bucket[index] != NULL){
        return 0; // alguém já ocupa essa posição!
    }
    Hash* insert_Hash = (Hash*)malloc(sizeof(Hash));

    if(!insert_Hash){
        printf("Memory Allocation failed");
        return 0;
    }

    insert_Hash->key = key; // valor da chave
    insert_Hash->object = strdup(object); // cópia dinamica da string
    table->bucket[index] = insert_Hash;
    return -1;
}

// Função para buscar um elemento 
char* searchElement(Hash_Table* table,int key){
    // calculo que vai ser usado pra posição do vetor
    int index = key % HASH_SIZE;
    
    // procurando valor dentro do vetor
    if(table->bucket[index] != NULL && table->bucket[index]->key == key){
        printf("\nFound Value: %s",table->bucket[index]->object);
        return table->bucket[index]->object;
    }
    return NULL; // Caso não seja encontrado valor no hash map
}

// Função para remoção de elementos
void removeElement(Hash_Table* table, int key){
    // calculo que vai ser usado pra posição do vetor
    int index = key % HASH_SIZE;

    // verificando se existe algo para ser removido
    if(table->bucket[index] != NULL && table->bucket[index]->key == key){
        free(table->bucket[index]->object);
        free(table->bucket[index]);
        table->bucket[index] = NULL;
    }
}

// Função para liberar memória
void freeMemory(Hash_Table* table){
    for (int i = 0;i<HASH_SIZE;i++){
        if(table->bucket[i] != NULL){
            free(table->bucket[i]->object);
            free(table->bucket[i]);
        }
    }
}

// Função para imprimir o hash map
void printHashTABLE(Hash_Table* table){
    for(int i = 0; i < HASH_SIZE; i++){
        if(table->bucket[i] != NULL){
            printf("\nBucket: Chave= %d Valor= %s",table->bucket[i]->key,table->bucket[i]->object);
        }else{
            printf("\nBucket vazio");
        }
    }
}