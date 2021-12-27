//
// Created by inawi on 24/12/2021.
//

#include "polynome.h"
#include <stdio.h>

double eval(Polynome p) {
    return 1.;
}

Polynome somme(Polynome a, Polynome b) {
    Polynome p;
    p.degree = a.degree > b.degree ? a.degree : b.degree;

    for (int i = 0; i <= p.degree; ++i) {
        p.coeff[i] = a.coeff[i] + b.coeff[i];
    }
    return p;
}

Polynome saisir() {
    Polynome p;
    printf("Queller la degree de votre polynome: ");
    scanf("%d", &p.degree);

    for (int i = 0; i <= p.degree; ++i) {
        printf("enter le coeff de X^%d : ", i);
        scanf("%lf", p.coeff + i);
    }
    return p;
};

void afficher(Polynome p) {
    printPolynome(p,stdout);
}

void printPolynome(Polynome p,FILE *f){
    for (int i = 0;i <= p.degree;++i) {
        if(i!=0) fprintf(f,"+");
        fprintf(f,"%lf*x**%d",p.coeff[i],i);
    }
}

void plot(Polynome p) {
    FILE *Gpipe = NULL;

    Gpipe = popen("gnuplot --persist", "w");
    fprintf(Gpipe, "set grid\n");
    fprintf(Gpipe, "plot ");
    printPolynome(p, Gpipe);
    fprintf(Gpipe, "t 'polynome' w l lc 0\n");
}

