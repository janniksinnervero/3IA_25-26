#include <stdio.h>
#include "lib.c"

#define DIM 10

int main(){
    int vettore[DIM];
    int i;

    srand(time(NULL));

    initVettore(vettore, DIM);
    stampaVettore(vettore, DIM);

    printf("\n");

    initVettore(vettore, 5);
    stampaVettore(vettore, 5);

    printf("\n");

    initVettore(vettore, 3);
    stampaVettore(vettore, 3);

    return 0;
}