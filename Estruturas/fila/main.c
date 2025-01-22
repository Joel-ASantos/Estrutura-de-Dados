# include <stdio.h>
# include <stdlib.h>
#define SIZE 5

// Estrutura de dado: Fila

/*
A estrutura de dados "fila" também chamado de "queue", segue
o princípio da fifo (first in first out) onde o primeiro a
chegar também é o primeiro a sair, semelhante a uma fila mesmo.
*/

struct fifo
{   
    int num;
    int front;
    int last;
    int array[SIZE];
}queue;

// iniciar o array com -1 pra sinalizar que não possui nada
void initQueue(){
    queue.front = -1;
    queue.last = -1;
}

int addItem(int val){
    // Caso a vetor estiver cheio
    if((queue.last + 1) % SIZE == queue.front){
        printf("Array is full\n");
    }

    // Caso a vetor estiver vazia;
    if(queue.front == -1){
        queue.front = 0;
    }
    // Adicionando valor ao vetor
    queue.last = (queue.last + 1)% SIZE;
    queue.array[queue.last] = val;
}

void removeItem(int val){

}

int main(int argc, char *argv[]){
    // inicio do código

    printf("Input numbers:\n");
    for(int i = 0;i < SIZE; i++){
        scanf("%d",&queue.num);
        addItem(queue.num);    
    }

    for(int i = 0;i < SIZE;i++){
        printf("values: %d\n",queue.array[i]);
    }
    return 0;
}