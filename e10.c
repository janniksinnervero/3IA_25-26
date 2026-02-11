/*
 Semplice programma che esegue tre diverse operazioni su numeri interi, selezionabili
da un menu numerico con discriminazione tramite switch-case.
Utilizzo della forma iterativa do-while.
*/


#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main (void) {

    int scelta=1;
    int num=0;
    int div=0;
    int cnt=0;
    int temp=0;

    printf("MENU\n");
    printf("1 -> Visualizza i divisori\n");
    printf("2 -> Verifica numero primo\n");
    printf("3 -> Verifica numero perfetto\n");
    printf("4 -> Genera N numeri casuali <1000\n");
    printf("5 -> Genera N numeri dispari <1000\n");
    printf("6 -> Genera N numeri casuali crescenti <9999\n");
    printf("7 -> Genera un numero casuale, determina il successivo numero primo\n");
    printf("0 -> Terimina programma\n");

    while(scelta!=0){

        printf("\nScegli un' opzione: ");
        scanf("%d", &scelta);

        switch(scelta) {

            case 1:{
                printf("\nInserisci un numero intero positivo: ");
                scanf("%d", &num);
                while (num%1==0 && num<0){
                    printf("\nValore non valido. Riprova: ");
                    scanf("%d", &num);
                }
                printf("\nDivisori di %d: ", num);
                while (num>div){
                    div=div+1;
                    if(num%div==0){
                        printf("%d ", div);
                    }

                }
                
                printf("\n");
                
            }

            break;
        
            case 2:{
                printf("\nInserisci un valore intero positivo: ");
                scanf("%d", &num);
                while (num%1==0 && num<0){
                    printf("\nValore non valido. Riprova: ");
                    scanf("%d", &num);
                }
                while (num>=div) {
                    div=div+1;
                    if(num%div==0){
                        cnt=cnt+1;
                    }
                }
                if(cnt==2){
                    printf("\nIl numero è primo");
                }
                else {
                    printf("\nIl numero non è primo");
                }
            }

            break;

            case 3:{
                printf("\nInserisci un valore intero positivo: ");
                scanf("%d", &num);
                while (num%1==0 && num<0){
                    printf("\nValore non valido. Riprova: ");
                    scanf("%d", &num);
                }
                while (num>=div){
                    div=div+1;
                    if (num%div==0){
                        cnt=cnt+div;
                    }
                }
                if(cnt==num){
                    printf("\nIl numero è perfetto.");
                }
                else{
                    printf("\nIl numero non è perfetto.");
                }
            }

            break;

            case 4: {
                printf("\nInserisci un valore intero positivo: ");
                scanf("%d", &num);
                while (num%1==0 && num<0){
                    printf("\nValore non valido. Riprova: ");
                    scanf("%d", &num);
                }
                const int max=1000;
                srand(time(NULL));

                do{
                    temp=1+rand() %max;
                    printf("%d ", temp);
                    cnt=cnt+1;
                }   
                while (cnt<num);
            }

            break;

            case 5: {
                printf("\nInserisci un valore intero positivo: ");
                scanf("%d", &num);
                while (num%1==0 && num<0){
                    printf("\nValore non valido. Riprova: ");
                    scanf("%d", &num);
                }
                const int max=1000;
                srand(time(NULL));

                do{
                    temp=1+rand() %max;
                    printf("%d ", temp);
                    cnt=cnt+1;

                    if(temp%2==0){
                        temp=temp+1;
                        printf("%d", temp);
                    }

                    else{
                        printf("%d", temp);
                    }

                }   
                while (cnt<num);

            }

            break;

            default:
        }
    }

    printf("\nProgramma terminato.");
    return 0;
}