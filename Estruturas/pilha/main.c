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

/*
    Retornou o valor correto agora

    O problema estava na linha 36 do pilha.c
    faltou eu incrementar para dar o indece correto no array.
*/

int main(int argc, char *argv[]){
    // Teste 03
    // criando uma pilha
    Stack* stack = createStack(5);
    
    // Adicionando valores na pilha
    push(stack,1);
    push(stack,2);
    push(stack,3); // Esse é o valor esperado

    // Vendo o topo da pilha
    printf("\nElemento no topo: %d",peek(stack));
    return 0;
}