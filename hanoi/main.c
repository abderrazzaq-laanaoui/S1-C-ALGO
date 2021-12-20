//
// Created by inawi on 20/12/2021.
//
#include<stdio.h>
#include<math.h>

/*
    les socles sont numérotés par : 1,2 et 3
    la fixation de de deux socles i et j implique le troisième
    k=(1+2+3)-(i+j)
*/

/*
 * This block of code is used to show how the complexity of this algorithm scales by incrementing input
 */
double getTime(int n) {
    double puis2 = pow(2, n);
    printf("puiss= %f %f\n", n, puis2);
    return (puis2 - 1) * 60 / 1.e9;
}

double Second2Year(double sec) {
    return sec / (24 * 3600 * 365.25);
}

void timeScalling() {
    double temp25, temp32, temp64;
    temp25 = getTime(25);
    temp32 = getTime(32);
    temp64 = Second2Year(getTime(64));
    printf("temp 25 Dis = %f s\ntemp 32 Dis = %f s\n tem pour 64 Dis = %f An\n", temp25, temp32, temp64);
}


void DeplacerDisque(int src, int dest) {
    printf("--> triez le disque de %d  --> placer le dans %d\n", src, dest);
}

void DeplacerDisques(int n, int src, int dest) {
    if (n > 0) {
        DeplacerDisques(n - 1, src, 6 - src - dest);
        DeplacerDisque(src, dest);
        DeplacerDisques(n - 1, 6 - src - dest, dest);
    }
}

int main() {
    int n;
    printf("entrez n : ");
    scanf("%d", &n);
    DeplacerDisques(n, 1, 3);

    // shows the time the algorithm will take to move 25, 32 and 64 disks
    timeScalling();
    return 0;
}
