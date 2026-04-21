#include <stdio.h>
#include "lib_ver.c"


int main(void){

    int _x=0;
    int _y=0;
    int _z=0;
    int _n=0;

    cnt1=0;
    cnt2=0;
    cnt3=0;
    cnt4=0;

    int menu=1;


    while(menu!=0){
        printf("\nSELEZIONA UNA FUNZIONE:\n 1 ---> inputNumeroFiltrato\n 2 ---> trovamiPrimo\n 3 ---> ordinaTreValori\n 4 ---> determinaFigura\n 0 ---> TERMINA PROGRAMMA\n");
        scanf("%d", &menu);

        switch(menu){
            case 1: {
                int n=inputNumeroFiltrato(_x, _y, _z);
                printf("\nValore ritornato: %d", n);
                cnt1++;
            }
            break;

            case 2: {
                printf("\nInserisci valore X: ");
                scanf("%d", &_x);

                printf("\nInserisci valore N: ");
                scanf("%d", &_n);

                int n=trovamiPrimo (_x, _n);
                printf("%d", n);
                cnt2++;
            }
            break;

            case 3:{

            }
            break;

            case 4:{
                printf("\nInserisci base rettangolo: ");
                scanf("%d", &_x);

                printf("\nInserisci altezza rettangolo: ");
                scanf("%d", &_y);

                int a;
                a=determinaFigura (_x, _y);
                printf("\n%d", a);
                cnt3++;
            }
            break;

            default:

        }
    }

    printf("\nFUNZIONE 1: %d \n FUNZIONE 2: %d\n FUNZIONE 3: %d\n FUNZIONE 4: %d\n", cnt1, cnt2, cnt3, cnt4);

    return 0;
}