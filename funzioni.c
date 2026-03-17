#include <stdio.h>
#include "mialib.c"

int main(void){
    int a=0;
    int b=0;
    int c=0;

    int a2=0;
    int b2=0;
    int c2=0;

    int opz=0;

    printf("1---> TERNA PITAGORICA\n 2---> NUMERO PERFETTO\n 3---> NUMERO PRIMO\n");
    //
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
    //
    printf("\nInserisci un valore intero: ");
    
    scanf("%d", &a);

    ver_perf(a); 

    if(ver_perf(a)){
        printf("Il numero è un numero perfetto");
    }

    else{
        printf("Il numero non è un numero perfetto");
    }
    return 0;

    //
    printf("Inserisci un valore: ");
    scanf("%d", &a);

    ver_primo(a);

    if(ver_primo(a)){
        printf("Il numero è un numero primo");
    }

    else{
        printf("Il numero non è un numero primo");
    }
}