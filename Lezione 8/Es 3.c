#include <stdio.h>
#include <stdlib.h>

struct elemento{

	int info;
	struct elemento *next;
};
typedef struct elemento ElementoDiLista;

void inserisci(ElementoDiLista **lista,int el);
void lettura(ElementoDiLista *lista);


int main(){

	ElementoDiLista *lista=NULL;
	int trovato=0;
	int n;
	while(!trovato){
		scanf("%d",&n);
		if(n>=0) inserisci(&lista,n);
		else trovato=1;
	}
	lettura(lista);

	return 0;

}


void inserisci(ElementoDiLista **lista, int el){

	ElementoDiLista *corr=*lista;
	ElementoDiLista *prec=NULL;
	ElementoDiLista *aux=malloc(sizeof(ElementoDiLista));
	aux->info=el;
	while(corr!=NULL && corr->info<el){
		prec=corr;
		corr=corr->next;
	}
	if(prec==NULL){
		*lista=aux;
		aux->next=corr;
	} else {
		if(corr==NULL){
			prec->next=aux;
			aux->next=corr;
	} else {
		prec->next=aux;
		aux->next=corr;
		}		
	}
}


void lettura(ElementoDiLista *lista){

	ElementoDiLista *corr=lista;
	while(corr!=NULL){
		printf("%d\n",corr->info);
		corr=corr->next;
	}
}