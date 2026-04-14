#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10

int main (void){
    int vet[DIM];    //array di 10 elementi indicizzati da 0 a 9
    int i;          //variabile tipica per lo scorrimento di un vettore
    int tmp=0;

    srand (time(NULL));
    //init di un vettore con valori casuali da 1 a 10
    for (i=0; i<DIM; i++){
        printf("Indice i: %d\n", i);
        vet[i]=1+rand()%10;
    }

    //stampo il vettore per vedere i valori assegnati
    for(i=0; i<DIM; i++){
        printf("%d ", vet[i]);
    }

    printf("\n");
    //raddoppio dei valori del vettore
    for(i=0; i<DIM; i++){
        tmp=vet[i];
        tmp=tmp*2;
        vet[i]=tmp;
        printf("%d ", vet[i]);
    }
    printf("\n");

    for(i=0; i<DIM; i++){
        if(vet[i]%2==0){
            printf("%d ", vet[i]);
        }
    }

    return 0;
}