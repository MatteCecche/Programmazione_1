#include <stdio.h>
#include <stdlib.h>


struct elemento {

	int info;
	struct elemento *next;

};
typedef struct elemento ElementoDiLista;


void In_Testa(ElementoDiLista **lista, int el);
int CalcoloSomma(ElementoDiLista *lista);
int Lung(ElementoDiLista *lista);
void CalcoloNElementi(ElementoDiLista *lista, int el, int el1);


int main(){


	ElementoDiLista *lista=NULL;
	int n;
	int trovato=0;
	int ris, cont;
	while(!trovato){
		scanf("%d",&n);
		if(n>=0) In_Testa(&lista,n);
		else trovato=1;
	}
	ris=CalcoloSomma(lista);
	printf("%d\n",ris);	
	cont=Lung(lista);
	CalcoloNElementi(lista,ris,cont);

	return 0;

}


void In_Testa(ElementoDiLista **lista, int el){

	ElementoDiLista *aux=malloc(sizeof(ElementoDiLista));
	aux->info=el;
	aux->next=NULL;
	ElementoDiLista *corr=*lista;
	if(corr==NULL) *lista=aux;
	else {
		aux->next=corr;
		*lista=aux;
	}

}


int CalcoloSomma(ElementoDiLista *lista){

	ElementoDiLista *corr=lista;
	int somma=0;
	while(corr!=NULL){
		somma+=corr->info;
		corr=corr->next;
	}
	
	return somma;

}


int Lung(ElementoDiLista *lista){
		
	ElementoDiLista *corr=lista;
	int conta=0;
	while(corr!=NULL){
		conta++;
		corr=corr->next;
	}
	
	return conta;

}


void CalcoloNElementi(ElementoDiLista *lista, int el, int el1){

	ElementoDiLista *corr=lista;
	int quarto=el/4;
	int conta=0;
	while(corr!=NULL){
		if(corr->info>quarto) conta++;
		corr=corr->next;
	}
	printf("%d\n",conta);

}
