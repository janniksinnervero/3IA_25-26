#include <stdio.h>
#include "lib.c"
#define DIM 5

int main(void){
    int vet[DIM]={3, 7, 2, 9, 1};

    setDist(vet, DIM);

    return 0;
}