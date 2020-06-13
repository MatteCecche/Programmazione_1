#include <stdio.h>
#include <stdlib.h>

struct elemento {

	int info;
	struct elemento *next;

};
typedef struct elemento ElementoDiLista;

void Lettura(ElementoDiLista **lista, int el);
void Inserisci(ElementoDiLista **lista, int el);
void Stampa(ElementoDiLista *lista);


int main(){

	ElementoDiLista *lista=NULL;
	int n, m;
	int trovato=0;
	while(!trovato){
		scanf("%d",&n);
		if(n>=0) Lettura(&lista,n);
		else trovato=1;
	}
	scanf("%d",&m);
	Inserisci(&lista,m);
	Stampa(lista);


	return 0;

}



void Lettura(ElementoDiLista **lista, int el){

	ElementoDiLista *corr=*lista;
	ElementoDiLista *aux=malloc(sizeof(ElementoDiLista));
	aux->info=el;
	aux->next=NULL;
	if(corr==NULL) *lista=aux;
	else {
		while(corr->next!=NULL)
			corr=corr->next;
			corr->next=aux;
	}

}



void Inserisci(ElementoDiLista **lista, int el){

	ElementoDiLista *corr=*lista;
	ElementoDiLista *prec=NULL;
	ElementoDiLista *aux=malloc(sizeof(ElementoDiLista));
	aux->info=el;
	aux->next=NULL;
	int conta=0;
	if(corr==NULL) *lista=aux;
	else{
		while(conta!=3 && corr!=NULL){
			prec=corr;		
			corr=corr->next;
			conta++;
		}
		if(corr==NULL) prec->next=aux;	
		else {
			prec=corr;		
			corr=corr->next;
			prec->next=aux;
			aux->next=corr;
		}
	}
}


void Stampa(ElementoDiLista *lista){

	while(lista!=NULL){
		printf("%d -> ",lista->info);
		lista=lista->next;
	}
	printf("NULL\n");

}
		
	
	
