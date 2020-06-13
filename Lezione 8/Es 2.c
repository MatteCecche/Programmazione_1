#include <stdlib.h>
#include <stdio.h>


struct elemento{

	int info;
	struct elemento *next;

};
typedef struct elemento ElementoDiLista;


void agg_fondo(ElementoDiLista **lista,int el);
void agg_cima(ElementoDiLista **lista, int el);
void elim_occ(ElementoDiLista **lista, int el);
void stampa_lista(ElementoDiLista *lista);


int main(){

	int n;
	int trovato=0;
	ElementoDiLista *lista=NULL;
	while(!trovato){
		scanf("%d",&n);
		if(n<0) elim_occ(&lista,n);
		if(n==0) trovato=1;
		if(n>0){  
			if(n%2==0) agg_cima(&lista,n);
			else agg_fondo(&lista,n);
		 }
	}
	stampa_lista(lista);

	return 0;

}


void agg_fondo(ElementoDiLista **lista,int el){

	ElementoDiLista *aux;
	ElementoDiLista *prec=NULL;
	ElementoDiLista *corr;
	corr=*lista;
	aux=malloc(sizeof(ElementoDiLista));
	aux->info=el;
	aux->next=NULL;
	if(*lista==NULL) *lista=aux;
	else {
		while(corr!=NULL){
			prec=corr;
			corr=corr->next;
		}
	prec->next=aux;
	}

}


void agg_cima(ElementoDiLista **lista,int el){

	ElementoDiLista *aux;
	aux=malloc(sizeof(ElementoDiLista));
	aux->info=el;
	if(*lista==NULL){ 
		*lista=aux;
		aux->next=NULL;
	} else {
		aux->next=*lista;
		*lista=aux;
	}
}


void elim_occ(ElementoDiLista **lista,int el){
	
	el=el*(-1);	
	ElementoDiLista *corr;
	ElementoDiLista *prec=NULL;
	corr=*lista;
	if(corr!=NULL){
		while(corr!=NULL && corr->info!=el){
			prec=corr;
			corr=corr->next;
		}
		if(corr!=NULL){
			if(prec==NULL){
				*lista=corr->next;
				free(corr);
			} else {
				if(corr->next==NULL){
					prec->next=NULL;
					free(corr);
				} else {
					prec->next=corr->next;
					free(corr);
				}
			}
		}
	}

}


void stampa_lista(ElementoDiLista *lista){

	ElementoDiLista *aux;
	aux=lista;
	while(aux!=NULL){
		printf("%d\n",aux->info);
		aux=aux->next;
	}
}
