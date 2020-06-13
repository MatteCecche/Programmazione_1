#include <stdio.h>

void ordered_swap(int *a, int *b, int *c);

int main(){

	int x, y, z;
	scanf("%d %d %d",&x,&y,&z);
	ordered_swap(&x,&y,&z);
	printf("%d\n%d\n%d\n",x,y,z);

	return 0;

}

void swap(int *a, int *b){
	
	int c=*a;
	*a=*b;
	*b=c;
}

void ordered_swap(int *a, int *b, int *c){

	if(*a>*b) swap(a,b);
	if(*b>*c) swap(b,c);
	if(*a>*b) swap(a,b);

}