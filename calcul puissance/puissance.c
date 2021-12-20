#include<stdio.h>
float puissance(float , int );
int main(){
	int n;
	float x,p;
	printf("size of int=%d\n",sizeof(long long));
	printf("entrez la base x : ");
	scanf("%f",&x);
	printf("entrez l'exposant n : ");
	scanf("%d",&n);
	if(x==0)
		p=0;
	else
		p=puissance(x,n);
	printf("%f^%d=%f\n",x,n,p);
	return 0;//synonyme d'une bonne execution
}

float puissance(float y, int m){
	float r=1;
	int i;
	for(i=1;i<=m;i++)
		r*=y;
	return r;
}
