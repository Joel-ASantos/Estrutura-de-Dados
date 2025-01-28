#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"

// Criando a pilha.
Stack* createStack(int capacity){
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->array = (int*)malloc(capacity*sizeof(int));
    stack->top = -1;
    return stack;
}

// verificar se está vazia
bool isEmpty(Stack* stack){
    return stack->top == -1;
}

// verificar se está cheia
bool isFull(Stack* stack){
    return stack->top == stack->capacity - 1;
}

// libera a memória da pilha
void freeStack(Stack* stack){
    free(stack->array);
    free(stack);
}

// Adiciona o elemento na pilha
void push(Stack* stack, int element){
    // Verificando se a pilha está cheia
    if(isFull(stack)){
        printf("\nStack is full, try remove at least one element!\n");
    }
    stack->top += 1;
    stack->array[stack->top] = element;
}

// Remove o elemento do topo da pilha
int pop(Stack* stack){
    // Verificando se a pilha está vazia.
    if(isEmpty(stack)){
        return printf("\nStack it's empty!\n");
    }
    stack->top -= 1;
    return stack->array[stack->top];
}

// Mostra o elemento no topo da pilha
int peek(Stack* stack){
    // Verificando se tem algo para ver
    if(isEmpty(stack)){
        return printf("\nStack is empty, there's nothing to see\n");
    }
    return stack->array[stack->top];
}

// tamanho da pilha
int size(Stack* stack){
    return stack->top+1;
}