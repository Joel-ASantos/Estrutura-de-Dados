#include <stdio.h>
#include <stdlib.h>

// Estrutura de Dados: Grafo

// À estrutura de dados "grafo", é uma estrutura de dados
// não linear, que consiste de vertices (nós) e bordas (edges)
// que conectam pares de nós.

int matrix[4][4]; // variável global  para matrix adjacente
int n; // número de vértices do grafo

void initGraph(int x){
    x = n;
    
    for(int i = 0;i < n; i++){
        for(int j = 0; j < n;i++){
            matrix[i][j] = 0;
        }
    }
}

void addEdges(int i,int j){
    if(i <= n && j <= n){
        printf("Doesn't exist vertex");
    }else if(i == j){
        printf("Same vertex");
    }
    
    matrix[i][j] = 1;
    matrix[j][i] = 1;
}

void removeEdges(int i, int j){
    
}

void printGraph(){
    for(int i = 0; i < n;i++){
        printf("\n");
        for(int j = 0; j < n;j++){
            printf("%d",matrix[i][j]);
        }
    }
}

int main(int argc, char* argv[]){
    
    return 0;
}