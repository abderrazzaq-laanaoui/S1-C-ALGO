//
// Created by inawi on 24/12/2021.
//
#include <stdio.h>
#include "polynome.h"


int square(int x){
    return x*x;
}

int main(void){

   Polynome  p = saisir();
    afficher(p);
    plot(p);
    return 0;
}