#include <stdio.h>
int main (void){

    int N=0;
    int mN=0;
    int cnt=0;

    printf("Inserisci N(1-10): ");
    scanf("%d", &N);

    while((N>10) || (1>N)){
        printf("\nValore non valido. Riprovare: ");
        scanf("%d", &N);
    }

    mN=N/2;

    if(N%2==0){
        while(N!=1000){
            N=N+mN;
            cnt++;
        }

        printf("Numero passaggi: %d", cnt);
    }

    else{
        while(N!=1000){
            N++;
            cnt++;
        }

        printf("Numero passaggi: %d", cnt);
    }
    return 0;
}