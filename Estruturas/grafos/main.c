#include <stdio.h>
#include <stdlib.h>

// Estrutura de Dados: Grafo

// À estrutura de dados "grafo", é uma estrutura de dados
// não linear, que consiste de vertices (nós) e bordas (edges)
// que conectam pares de nós.

int matrix[4][4]; // variável global  para matrix adjacente
int n; // número de vértices do grafo

void initGraph(int x){
    n = x;
    
    for(int i = 0;i < n; i++){
        for(int j = 0; j < n; j++){
            matrix[i][j] = 0;
        }
    }
}

void addEdges(int i,int j){
    if(i >= n || j >= n){
        printf("\nDoesn't exist vertex");
    }else if(i == j){
        printf("\nSame vertex");
    }
    
    matrix[i][j] = 1;
    matrix[j][i] = 1;
}

void printGraph(){
    for(int i = 0; i < n;i++){
        printf("\n");
        for(int j = 0; j < n;j++){
            printf("%d\t",matrix[i][j]);
        }
    }
}

int main(int argc, char* argv[]){
    
    initGraph(4); // iniciando grafo
    
    // adicionando conexões
    addEdges(0,2);
    addEdges(1,2);
    addEdges(2,5); // Deve retornar que não existe
    addEdges(3,0);
    addEdges(1,1); // Deve retornar que não existe
    addEdges(4,4); // Deve retornar que não existe

    printGraph(); // imprimindo grafo

    /*
    Output:
    Doesn't exist vertex
    Same vertex
    Doesn't exist vertex
    0       0       1       1
    0       1       1       0
    1       1       0       0
    1       1       0       0
    */
    return 0;
}