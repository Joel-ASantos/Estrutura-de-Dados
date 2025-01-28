#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"

// Estrutura de Dados: Pilha

/*
A estrutura de dados pilha, é uma estrutura de dados que
armazena os dados de forma sequencial de forma que os dados
são empilhados em cima uns dos outros, de maneira que somente o
dado mais recente é acessível.
*/

int main(int argc, char *argv[]){
    // Teste 06
    // criando uma pilha
    Stack* stack = createStack(3);
    
    // Adicionando valores na pilha
    push(stack,1);
    push(stack,2);
    push(stack,3);

    // Vendo o topo da pilha
    printf("\nStack Size before pop: %d",size(stack));
    printf("\nPeek element before pop: %d",peek(stack));
    printf("\nRemoved Element: %d",pop(stack));
    printf("\nPeek element after pop: %d",peek(stack));
    printf("\nStack Size: %d",size(stack));

    // Liberar memória da pilha
    freeStack(stack);
    return 0;
}