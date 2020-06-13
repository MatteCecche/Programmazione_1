#include <stdio.h>
#include <stdlib.h>

typedef struct {

	int codice;
	int eta;
	float peso;
	int cibo;
} gatto;


int main(){

	gatto gatto1, gatto2, gatto3, gatto4;
	float media=0;
	scanf("%d %d %f %d",&gatto1.codice,&gatto1.eta,&gatto1.peso,&gatto1.cibo);
	scanf("%d %d %f %d",&gatto2.codice,&gatto2.eta,&gatto2.peso,&gatto2.cibo);
	scanf("%d %d %f %d",&gatto3.codice,&gatto3.eta,&gatto3.peso,&gatto3.cibo);
	scanf("%d %d %f %d",&gatto4.codice,&gatto4.eta,&gatto4.peso,&gatto4.cibo);
	media=gatto1.peso+gatto2.peso+gatto3.peso+gatto4.peso;
	media=media/4;
	if (gatto1.eta<4 && gatto1.peso>media){
		if(gatto1.cibo==0) printf("%d crocchette\n",gatto1.codice);
		if(gatto1.cibo==1) printf("%d scatolette\n",gatto1.codice);
		if(gatto1.cibo==2) printf("%d tonno\n",gatto1.codice);
	}
	if (gatto2.eta<4 && gatto2.peso>media){
		if(gatto2.cibo==0) printf("%d crocchette\n",gatto2.codice);
		if(gatto2.cibo==1) printf("%d scatolette\n",gatto2.codice);
		if(gatto2.cibo==2) printf("%d tonno\n",gatto2.codice);
	}
	if (gatto3.eta<4 && gatto3.peso>media){
		if(gatto3.cibo==0) printf("%d crocchette\n",gatto3.codice);
		if(gatto3.cibo==1) printf("%d scatolette\n",gatto3.codice);
		if(gatto3.cibo==2) printf("%d tonno\n",gatto3.codice);
	}
	if (gatto4.eta<4 && gatto4.peso>media){
		if(gatto4.cibo==0) printf("%d crocchette\n",gatto4.codice);
		if(gatto4.cibo==1) printf("%d scatolette\n",gatto4.codice);
		if(gatto4.cibo==2) printf("%d tonno\n",gatto4.codice);
	}

	return 0;


}	