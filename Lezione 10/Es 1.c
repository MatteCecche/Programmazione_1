#include <stdio.h>

int Pot2(int x);

int main(){

	int x;
	scanf("%d",&x);
	printf("%d\n",Pot2(x));

	return 0;

}


int Pot2(int x){

	if(x==1) return 2;
	else return 2*Pot2(x-1);

}
