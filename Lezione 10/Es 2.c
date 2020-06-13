#include <stdio.h>
#include <stdlib.h>

struct elemento {

	int info;
	struct elemento *next;

};
typedef struct elemento ElementoDiLista;

void Lett_Lista(ElementoDiLista **lista, int el);
void RecStampa(ElementoDiLista *lista);

int main(){

	ElementoDiLista *lista=NULL;
	int n;
	int trovato=0;
	while(!trovato){
		scanf("%d",&n);
		if(n>=0) Lett_Lista (&lista,n);
		else trovato=1;
	}
	RecStampa(lista);

	return 0;

}


void Lett_Lista(ElementoDiLista **lista, int el){

	ElementoDiLista *corr=*lista;	
	ElementoDiLista *aux=malloc(sizeof(ElementoDiLista));
	aux->info=el;
	if(corr==NULL){
		aux->next=NULL;
		*lista=aux;
		corr=*lista;
	} else {
		aux->next=*lista;
		*lista=aux;
	}

}


void RecStampa(ElementoDiLista *lista){

	if(lista!=NULL){
		printf("%d -> ",lista->info);
		RecStampa(lista->next);
	} else printf("NULL\n");

}
