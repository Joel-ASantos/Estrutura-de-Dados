#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.h"

// Funções para o Hash Map

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

    insert_Hash->key = key;
    table->bucket[index] = insert_Hash;
    return -1;
}

char* searchElement(Hash_Table* table,int key){
    // calculo que vai ser usado pra posição do vetor
    int index = key % HASH_SIZE;
    
    // procurando valor dentro do vetor
    // lógica ainda a fazer
}

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

void freeMemory(Hash_Table* table){

}