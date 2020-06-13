#include <stdio.h>
#include <stdlib.h>

struct elemento {

	int info;
	struct elemento *next;

};
typedef struct elemento ElementoDiLista;

void Lett_lista(ElementoDiLista **lista, int el);
int RecLength(ElementoDiLista *lista);

int main(){

	ElementoDiLista *lista=NULL;
	int n;
	int trovato=0;
	while(!trovato){
		scanf("%d",&n);
		if(n>=0) Lett_lista(&lista,n);
		else trovato=1;
	}
	printf("%d\n",RecLength(lista));

	return 0;

}

void Lett_lista(ElementoDiLista **lista, int el){

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


int RecLength(ElementoDiLista *lista){

	if(lista==NULL) return 0;
	else{
		while(lista!=NULL) return RecLength(lista->next)+1;
	}
	
}		
