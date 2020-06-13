#include <stdio.h>

int main(){

	int n;
	scanf("%d",&n);
	int x=0;
	int y=1;
	int ris=0;
	printf("0\n");
	while(ris<=n){
		ris=x+y;
		y=x;
		x=ris;
		if(ris<=n) printf("%d\n",ris);
	}

	return 0;

}