#include "./statistiques.h"
#include <stdlib.h>
#include <math.h>

float moyenne(int* vals,int size){
    int sum = 0;
    for (size_t i = 0; i < size; i++) {
        sum += *(vals + i);
    }

    return (float)sum/size;

}

float ecart_type(int* vals, int size){
    float  moy = moyenne(vals,size);
    unsigned int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum+= (*(vals+i) - moy)*(*(vals+i) - moy);
    }

    float div = (float)sum/size;
    return sqrt(div);


}
