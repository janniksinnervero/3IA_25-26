#include "lib.c"
#include <stdio.h>

#define DIM 8

int main(void){
    int n=0;
    int bin[DIM];

    printf("Inserisci un valore intero: ");
    scanf("%d", &n);

    convertiBin(n, bin, DIM);
    stampaBin(bin, DIM);
    printf("\n\n");


    return 0;
}