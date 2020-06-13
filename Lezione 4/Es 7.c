#include <stdio.h>

int main(){

	int h;
	int l;
	scanf("%d",&h);
	scanf("%d",&l);
	int x;
	int spaz;
	for(x=0;x<l;x++) printf("*");
	printf("\n");
	x=2;
	while(x<h){
		printf("*");
		spaz=2;
		while(spaz<l){
			if(l>1){
				printf(" ");
				spaz++;
				}
			}
		if(l>1) printf("*");
		x++;
		printf("\n");
	}
	if(h>1){
		for(x=0;x<l;x++) printf("*");
		printf("\n");
	}


	return 0;

}