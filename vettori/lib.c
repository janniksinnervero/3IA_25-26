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
//-----e05.c------
void prodottoSommeSuccessive(int n1, int n2){
    int sum=0;
    int num=0;
    int cnt=0;

    while (cnt!=n1){
        num+=n1;
        cnt++;
    }

    sum=num*n2;

    printf("Risultato: %d", sum);
}

void areaCerchioQuadrato(int lenght, int c_q){
    float area=0;

    if (c_q==0){
        area=(lenght/2*lenght/2)*3,14;
        printf("L' area del cerchio  vale %.2d", area);
    }
    else{
        area=lenght*lenght;
        printf("L' area del quadrato vale: %.2d", area);
    }
}

void sommaCifre (int n1){
    int cifra=0;
    int sum=0;

    while(n1>0){
        cifra=n1%10;
        n1=n1/10;
        sum+=cifra;  
    }
    printf("La somma di ogni cifra di %d è %d", n1, sum);
}