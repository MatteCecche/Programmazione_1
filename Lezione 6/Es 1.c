#include <stdio.h>

void diff_abs(float *a, float *b);

int main(){

	float x, y;
	scanf("%f %f",&x,&y);
	diff_abs(&x,&y);
	printf("%.2f\n",x);
	printf("%.2f\n",y);


	return 0;

}



void diff_abs(float *a, float *b){

	float c, d;
	c=*a;
	d=*b;	
	*a=*a-*b;
	*b=d-c;

}
