#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"

// Criando a pilha.
Stack* createStack(int capacity){
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->array = (int*)malloc(sizeof(capacity*sizeof(int)));
    stack->top = -1;
    return stack;
}

// verificar se está vazia
bool isEmpty(Stack* stack){

}

// verificar se está cheia
bool isFull(Stack* stack){
    
}

// libera a memória da pilha
void freeStack(Stack* stack){
    
}

// Adiciona o elemento na pilha
void push(Stack* stack, int element){
    // Verificando se a pilha está cheia
    if(isFull(stack)){
        return printf("Stack is full, try remove at least one element!");
    }
    stack->array[stack->top] = element;
}

// Remove o elemento do topo da pilha
int pop(Stack* stack){
    // Verificando se a pilha está vazia.
    if(isEmpty(stack)){
        return printf("Stack it's empty!");
    }
    return stack->array[stack->top] -= stack->top;
}

// Mostra o elemento no topo da pilha
int peek(Stack* stack){

}

// tamanho da pilha
int size(Stack* stack){

}