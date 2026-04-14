#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mialib.c"

int main(void){
    int a=0;
    int b=0;
    int c=0;

    int* _a;
    int* _b;

    int n_val=0;

    int opz=1;
    

    printf("1---> TERNA PITAGORICA\n 2---> NUMERO PERFETTO\n 3---> NUMERO PRIMO\n 0---> TERMINA PROGRAMMA");
    

    while(opz!=0){
        printf("\nSeleziona un' opzione: ");
        scanf("%d", &opz);

        switch(opz){
        
            case 1:{
                //TERNA PITAGORICA
                printf("\nTERNA PITAGORICA");

                printf("\nInserisci A: ");
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
                break;
            }

            case 2:{
                //NUMERO PERFETTO
                printf("NUMERO PERFETTO");

                printf("\nInserisci un valore intero: ");
    
                scanf("%d", &a);

                ver_perf(a); 

                if(ver_perf(a)){
                    printf("\nIl numero è un numero perfetto");
                }

                else{
                    printf("\nIl numero non è un numero perfetto");
                }
                break;
            }

            case 3:{
                //NUMERO PRIMO
                printf("NUMERO PRIMO");

                printf("\nInserisci un valore: ");
                scanf("%d", &a);

                ver_primo(a);

                if(ver_primo(a)){
                    printf("\nIl numero è un numero primo");
                }

                else{
                    printf("\nIl numero non è un numero primo");
                }
                break;
            }
            default:
        }
    }
    return 0;
}