#include <stdio.h>
#include "mialib.c"

int menu=1;

int n1=0;
int n2=0;


int main (){

    while (menu!=0){
        printf("\n0--> INTERROMPI PROGRAMMA\n 1--> NUMERO DIVISORI\n 2--> CIFRA MAGGIORE\n 3--> SOMMA CIFRE\n 4--> MEDIA CIFRE\n 5--> CIFRE AL CONTRARIO\n 6--> MCD O MCM\n ");
        scanf("%d", &menu);
        switch (menu){
            case 1: {
                printf("\nInserisci un valore intero: ");
                scanf("%d", &n1);
                printf("\nNumero divisori: ");
                ndiv(n1);
                break;
            }

            case 2: {
                printf("\nInserisci il primo valore: ");
                scanf("%d", &n1);
                printf("\nInserisci il secondo valore: ");
                scanf("%d", &n2);
                printf("\nLa cifra maggiore è: ");
                ciframag(n1, n2);
                break;
            }
            
            case 3: {

            }
            
            default:
        }
    }
    return 0;
}