#include "fila.h"

void FFVazia(Fila *f){
	f->first = (Block*) malloc (sizeof(Block));
	f->last  = f->first;
	f->first->prox = NULL;
}

void Enfileira(Fila *f, Item d){
	f->last->prox = (Block*) malloc (sizeof(Block));
	f->last = f->last->prox;
	f->last->data = d;
	f->last->prox = NULL;
}

void Desenfileira(Fila *f, Item *d){
	Block *aux;

	if(f->first == f->last || f == NULL || f->first->prox == NULL){
		printf("FILA VAZIA!\n");
		return;
	}
	
	aux = f->first;
	f->first = f->first->prox;
	d->val   = f->data.val;
	free(aux);
}


void FImprime(Fila *f){
	Block *aux;

	aux = f->first->prox;
	while(aux != NULL){
		printf("%d\n", aux->data.val);
		aux = aux->prox;
	}

}

