#include <stdio.h>
#include <stdlib.h>


struct elemento {

	int info;
	struct elemento *next;

};
typedef struct elemento ElementoDiLista;


void In_Testa(ElementoDiLista **lista, int el);
void Stampa(ElementoDiLista *lista);
void rec_reverse (ElementoDiLista **head);


int main(){

	ElementoDiLista *lista=NULL;
	int n;
	int trovato=0;
	while(!trovato){
		scanf("%d",&n);		
		if(n>=0) In_Testa(&lista,n);
		else trovato=1;
	}
	rec_reverse(&lista);	
	Stampa(lista);

	return 0;

}


void In_Testa(ElementoDiLista **lista, int el){

	ElementoDiLista *corr=*lista;
	ElementoDiLista *aux=malloc(sizeof(ElementoDiLista));
	aux->info=el;
	aux->next=NULL;	
	if(*lista==NULL) *lista=aux;
	else {
		aux->next=corr;
		*lista=aux;
	}
		 
}

void Stampa(ElementoDiLista *lista){

	
	if(lista!=NULL){
		printf("%d -> ",lista->info);
		Stampa(lista->next);
	} else printf("NULL\n");

}


void rec_reverse (ElementoDiLista **head){               

	ElementoDiLista *aux;
	if(*head!=NULL){
		if((*head)->next!=NULL){
			aux=*head;
			*head=(*head)->next;
			rec_reverse(&(*head));
			aux->next->next=aux;
			aux->next=NULL;
		}	
	}

}
