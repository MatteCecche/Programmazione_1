#include <stdio.h>

int main(){

	int n, m, c;
	scanf("%d",&n);
	m=1;
	c=n;
	if(n>1){
		while(m<n){
			n*=m;
			m++;
			if(m==c) printf("%d\n",n);
			}
		}
	else printf("%d",1);

	return 0;
}