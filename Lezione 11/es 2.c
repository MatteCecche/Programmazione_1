#include <stdio.h>
#include <stdlib.h>

struct elemento {

	int info;
	struct elemento *next;

};
typedef struct elemento ElementoDiLista;

void lettura(ElementoDiLista **lista, int el);
int pari(ElementoDiLista *lista);
int dispari(ElementoDiLista *lista);


int main(){

	ElementoDiLista *lista=NULL;
	int n;
	int trovato=0;
	while(!trovato){
		scanf("%d",&n);
		if(n>=0) lettura(&lista,n);
		else trovato=1;
	}
	printf("%d\n",dispari(lista));	
	printf("%d\n",pari(lista));

	
	return 0;

}



void lettura(ElementoDiLista **lista, int el){

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


int pari(ElementoDiLista *lista){

	ElementoDiLista *corr=lista;
	int trovato=0;
	while(corr!=NULL){
		if(corr->info%2==0) return corr->info;
		else corr=corr->next;
	}
	if(!trovato) return -1;

}


int dispari(ElementoDiLista *lista){

	ElementoDiLista *corr=lista;
	int trovato=0;
	while(corr!=NULL){
		if(corr->info%2==1) return corr->info;
		else corr=corr->next;
	}
	if(!trovato) return -1;

}
