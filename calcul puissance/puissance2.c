#include<stdio.h>
float puissance2(float , int );
int main(){
	int n;
	float x,p;
	printf("entrez la base x : ");
	scanf("%f",&x);
	printf("entrez l'exposant n : ");
	scanf("%d",&n);
	p=x==0?0:puissance2(x,n);
	printf("%f^%d=%f\n",x,n,p);
	return 0;//synonyme d'une bonne execution
}

float puissance2(float y, int m){
	float pdemi;
    if(m==0) return 1;
    pdemi=puissance2(y,m/2); // le diviion est entière
    return m%2?pdemi*pdemi*y:pdemi*pdemi;
}
