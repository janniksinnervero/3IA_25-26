#include <stdio.h>
#include "mialib.c"

int main(void){
    int a=0;
    int b=0;
    int c=0;

    int a2=0;
    int b2=0;
    int c2=0;

    int num=0;

    printf("Inserisci A: ");
    scanf("%d", &a);

    printf("\nInserisci B: ");
    scanf("%d", &b);

    printf("\nInserisci C: ");
    scanf("%d", &c);

    ternaPit(a, b, c);

    if(ternaPit(a, b, c)){
        printf("\nI tre numeri sono una terna pitagorica");
    }

    else {
        printf("\nI tre numeri non sono una terna pitagorica");
    }

    printf("\nInserisci un valore intero: ");
    
    scanf("%d", &num);

    numPerf(num); 

    if(numPerf(num)){
        printf("Il numero è un numero perfetto");
    }

    else{
        printf("Il numero non è un numero perfetto");
    }
    return 0;
}