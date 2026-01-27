/*
 Semplice programma che esegue tre diverse operazioni su numeri interi, selezionabili
da un menu numerico con discriminazione tramite switch-case.
Utilizzo della forma iterativa do-while.
*/


#include <stdio.h>
int main (void) {

    int scelta=0;
    int num=0;
    int div=0;
    int cnt=0;

    printf("MENU\n");
    printf("1 -> visualizza i divisori\n");
    printf("2 -> verifica numero primo\n");
    printf("3 -> verifica numero perfetto\n");
    printf("0 -> terimina programma\n");

    printf("Scegli un' opzione: ");
    scanf("%d", &scelta);

    while(scelta!=0){

        switch(scelta) {

            case 1:{
                printf("Inserisci un numero intero positivo: ");
                scanf("%d", &num);
                while (num%1==0 || num<0){
                    printf("Valore non valido. Riprova: ");
                    scanf("%d", &num);
                }
                printf("\nDivisori di %d: ", num);
                while (num>div){
                    div=div+1;
                    if(num%div==0){
                        printf("%d ", div);
                    }

                }
                
            }
        
            case 2:{
                printf("Inserisci un valore intero positivo: ");
                scanf("%d", &num);
                while (num%1==0 || num<0){
                    printf("Valore non valido. Riprova: ");
                    scanf("%d", &num);
                }
                while (num>div) {
                    div=div+1;
                    if(num%div==0){
                        cnt=cnt+1;
                    }
                }
                if(cnt==2){
                    printf("Il numero è primo");
                }
                else {
                    printf("Il numero non è primo");
                }
            }

            case 3:{


            }







        }




    }
    }

