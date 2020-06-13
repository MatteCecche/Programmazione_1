#include <stdio.h>
#include <stdlib.h>

struct elemento {

	int info;
	struct elemento *next;

};
typedef struct elemento ElementoDiLista;
typedef ElementoDiLista *ListaDiElementi;

void testa(ElementoDiLista **lista,int el);
void rimuovi(ElementoDiLista **lista);
void lettura(ElementoDiLista *lista);

int main(){

	int n;
	int trovato=0;
	ElementoDiLista *lista=NULL;
	while(!trovato){
		scanf("%d",&n);
		if(n>0) testa(&lista,n);
		if(n==0) rimuovi(&lista);
		if(n<0) trovato=1;
	}
	lettura(lista);


	return 0;
}


void testa(ElementoDiLista **lista,int el){

	ElementoDiLista *aux;
	aux=malloc(sizeof(ElementoDiLista));
	aux->info=el;
	if(*lista==NULL) aux->next=NULL;
	else aux->next=*lista;
	*lista=aux;

}


void rimuovi(ElementoDiLista **lista){

	if(*lista!=NULL){
		ElementoDiLista *aux;
		aux=*lista;
		*lista=(*lista)->next;
		free(aux);

	}

}


void lettura(ElementoDiLista *lista){

	ElementoDiLista* corr=lista;
	while(corr!=NULL){
		printf("%d\n",corr->info);
		corr=corr->next;
	}

}