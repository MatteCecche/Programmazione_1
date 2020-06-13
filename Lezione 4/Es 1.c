#include <stdio.h>

int main(){

	int a[10];
	int n, i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=9;i>=0;i--)
		if(a[i]%2==0) printf("%d\n",a[i]/2);
		else printf("%d\n",a[i]);

	return 0;
	
}