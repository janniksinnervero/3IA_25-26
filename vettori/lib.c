#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lib.h"


void initVettore(int _vet[], int _dim){
    int i;
    for(i=0; i<_dim; i++){
        _vet[i]=1+rand()%10;
    }
}

void stampaVettore(int _vet[], int _dim){
    int i;
    for(i=0; i<_dim; i++){
        printf("%3d ", _vet[i]);
    }
}
//----e03.c------
int convertiBin (int _n, int _v[], int _dim){
    int i;
    for(i=0; i<_dim; i++){
        _v[i]=_n%2;
        _n=_n/2;
    }
    return 1;
}

void stampaBin(int _v[], int _dim){
    int i;
    for(i=_dim-1; i>=0; i--){
        printf("%d", _v[i]);
    }
}

void setDist(int v[], int dim){
    int num=0;
    for(int i=0; i<dim; i++){
        num=10-v[i];
        printf("\n%d ---> %d", v[i], num);
    }
}

void rightRotate(int v[], int dim){
    int tmp=0;
    tmp=v[DIM-1];
    printf("\nVETTORE ORIGINALE --> {");
    for(int cnt=0; cnt<DIM; cnt++){
        printf("%d ", v[i]);
    }
    printf("}");
    for(int i=DIM; i!=0; i--){
        v[i]=v[i-1];
    }
    printf("VETTORE DOPO LA FUNZIONE ---> {");
    for(int j=0; j<DIM; j++){
        printf("");
    }
}