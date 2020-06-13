#include <stdio.h>
#include <stdlib.h>

struct elemento {

	int info;
	struct elemento *next;

};
typedef struct elemento ElementoDiLista;

void inserisci(ElementoDiLista **lista, int el);
void intersezione(ElementoDiLista **lista1, ElementoDiLista **lista2, ElementoDiLista **lista3);
void stampa_lista(ElementoDiLista *lista);


int main(){

	ElementoDiLista *lista1=NULL;
	ElementoDiLista *lista2=NULL;
	ElementoDiLista *lista3=NULL;
	int trovato=0;
	int n;
	while(!trovato){
		scanf("%d",&n);
		if(n>=0) inserisci(&lista1,n);
		else trovato=1;
	}
	trovato=0;
	while(!trovato){
		scanf("%d",&n);
		if(n>=0) inserisci(&lista2,n);
		else trovato=1;
	}
	intersezione(&lista1,&lista2,&lista3);
	stampa_lista(lista3);

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


void intersezione(ElementoDiLista **lista1, ElementoDiLista **lista2, ElementoDiLista **lista3){

	ElementoDiLista *corr1;
	ElementoDiLista *corr2;
	ElementoDiLista *corr3;
	ElementoDiLista *prec=NULL;
	corr1=*lista1;
	corr2=*lista2;
	corr3=*lista3;
	int trovato=0;
	while(!trovato && corr2!=NULL){
		if(corr1->info==corr2->info){
			if(corr3==NULL){
				ElementoDiLista *new=malloc(sizeof(ElementoDiLista));
				new->info=corr1->info;
				*lista3=new;
				corr3=*lista3;
			} else {
				if(corr1->info!=corr3->info){
					ElementoDiLista *new=malloc(sizeof(ElementoDiLista));
					new->info=corr1->info;
					corr3->next=new;
					prec=corr3;
					corr3=new;
					}
				
			}	
		trovato=1;
		}
	corr1=corr1->next;
	if(corr1==NULL || trovato){
		corr1=*lista1;
		corr2=corr2->next;
		trovato=0;
	}

	}

}


void stampa_lista(ElementoDiLista *lista){

	ElementoDiLista *corr=lista;
	while(corr!=NULL){
		printf("%d\n",corr->info);
		corr=corr->next;
	}

}