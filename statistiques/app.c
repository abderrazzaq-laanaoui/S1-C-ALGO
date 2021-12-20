#include "./statistiques.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *vals, size;
    printf("Souhaitez-vous tester sur combien des nombres: ");
    scanf("%d",&size);
    vals = (int*) malloc(sizeof(int)*size);
    for(size_t i = 0; i < size; ++i){
        printf("entrer l'element %d : ",i+1);
        scanf("%d",vals+i);
    }
    printf("moyenne: %f\n",moyenne(vals,size));
    printf("ecart type: %f\n",ecart_type(vals,size));

    free(vals);
    vals=NULL;

    return 0;
}