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

void removeItem(){
    // Verificar se o vetor já está vazio.
    if(queue.front == -1){
        printf("Array is empty");
    }

    // remover elemento dentro do vetor.
    // ajustar posição: (queue.front + 1) % SIZE;
    queue.array[queue.front] = -1;

    if(queue.front == queue.last){
        queue.front = -1;
        queue.last = -1;
    }else{
        queue.front = (queue.front + 1) % SIZE;
    }
}

int main(int argc, char *argv[]){
    // inicio do código
    initQueue();

    printf("Input numbers:\n");
    for(int i = 0;i < SIZE; i++){
        scanf("%d",&queue.num);
        addItem(queue.num);    
    }

    for(int i = 0;i < SIZE;i++){
        printf("values: %d\n",queue.array[i]);
    }
    
    // Saida: [-1,-1,-1,-1,-1]. Isso significa que o vetor está vázio.
    for(int i = 0;i < SIZE;i++){
        removeItem();
    }
    
    printf("\n");
    for(int i = 0; i < SIZE; i++){
        printf("values after remove: %d\n",queue.array[i]);
    }
    

    return 0;
}