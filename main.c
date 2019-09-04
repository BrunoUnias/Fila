#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_MAXIMO 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct queue{
	int itens[TAMANHO_MAXIMO];
	int front,rear;
	
};

int vazia(struct queue *pq){
	if(pq->front == pq->rear){
		printf("\nFila vazia");
		return 1;
	}
	return 0;
	
}


int insere(struct queue *pq,int x){
	if(pq->rear + 1 >= TAMANHO_MAXIMO){
		printf("\nEstouro da capacidade da fila");
		return 1;
	}
	pq->itens[pq->rear++] = x;
	return 0;
	
}

int fila_remove(struct queue *pq){
	int v;
	if(vazia(pq)){
		printf("\nFila vazia");
		return 1;
	}
	v = pq->itens[pq->front];
	pq->front = pq->rear;
	return v;
	
}

int size(struct queue *pq){
	return pq->front - pq->rear + 1;
	
}

int front(struct queue *pq){
	return pq->front;
	
}

int main() {
	struct queue *pq;
	int opcao;
	int x;
	while(opcao){
		printf("1-vazia\n2-inserir\n3-remove\n4-size\n5-front\n");
		scanf("%d",&opcao);
		if(opcao == 1){
			printf(vazia(pq));
			
		}
	}
		
	return 0;
}
