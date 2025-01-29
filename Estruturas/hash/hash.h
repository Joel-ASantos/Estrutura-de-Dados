// Interface para a tabela HASH

#ifndef HASH_MAP_H
#define HASH_MAP_H

#define HASH_SIZE 16
#include <string.h>
#include <stdlib.h>

typedef struct Hash{
    int key;
    char* object;
}Hash;

typedef struct{
    Hash* bucket[HASH_SIZE];
}Hash_Table;

int insertElement(Hash_Table* table, int key, const char* object);
char* searchElement(Hash_Table* table, int key);
void removeElement(Hash_Table* table, int key);
void freeMemory(Hash_Table* table);
void printHashTABLE(Hash_Table* table);

#endif