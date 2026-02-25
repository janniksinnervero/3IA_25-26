#include <stdio.h>
int main (void){

    int n_ve=0;
    float l=0;
    float tot_l=0;
    float media=0;
    int cnt_ve=1;
    int yn=0;
    float sum=0;

    printf("Quanti veicoli vuoi registrare? ");
    scanf("%d", &n_ve);

    while(n_ve<=0){
        printf("\nNon valido, inserisci almeno uno o più veicoli: ");
        scanf("%d", &n_ve);
    }

    for(int i; i!=n_ve; i++){
        printf("\nInserisci litri di carburante del veicolo %d: ", cnt_ve);
        cnt_ve++;
        scanf("%f", &l);
        if(l>100){
            printf("\nATTENZIONE, CONSUMO CRITICO (>100l)");
            printf("\nVuoi cambiare quantità? (1 --> Sì   2 --> No)");
            scanf("%d", &yn);
            if(yn==1){
                printf("\nInserisci litri di carburante del veicolo %d: ", cnt_ve);
                scanf("%f", &l);
            }
        
        }
    sum=sum+l;
    media=sum/cnt_ve;
    }

    printf("\nMedia litri di carburante per %d veicoli: %.2f", cnt_ve, media);

return 0;  
}