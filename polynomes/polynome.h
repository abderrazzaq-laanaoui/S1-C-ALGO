//
// Created by inawi on 24/12/2021.
//

#ifndef _POLYNOME_H
#define _POLYNOME_H

#include <stdio.h>

#define NMAX 100;


typedef struct Polynome{
    double coeff[100];
    int degree;
} Polynome;

double eval(Polynome);
Polynome somme(Polynome ,Polynome);
Polynome saisir();
void afficher(Polynome);
void plot(Polynome p);
void printPolynome(Polynome,FILE *);

#endif //_POLYNOME_H
