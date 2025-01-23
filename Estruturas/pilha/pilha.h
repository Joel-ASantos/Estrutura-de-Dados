#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

typedef struct Stack {
    int top;
    int capacity;
    int *array;
} Stack;

Stack* createStack(int capacity);
void push(Stack* stack, int element);
int pop(Stack* stack);
int peek(Stack* stack);
bool isEmpty(Stack* stack);
bool isFull(Stack* stack);
int size(Stack* stack);
void freeStack(Stack* stack);

#endif