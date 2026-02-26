#include <stdio.h>
int main (void) {

    int div=0;
    int max=0;
    int sum=0;
    int mul=0;
    int cnt=0;
    float media=0;

    printf("Inserisci un intero div compreso tra 2 e 10: ");
    scanf("%d", &div);

    while ((div<2) || (div>10)){
        printf("\nValore non valido. Inserisci un valore tra 2 e 10: ");
        scanf("%d", &div);
    }

    mul=mul+div;

    printf("\nInserisci un intero max compreso tra 50 e 1000: ");
    scanf("%d", &max);

    while ((max<50) || (max>1000)){
        printf("\nValore non valido. Inserisci un valore tra 50 e 1000: ");
        scanf("%d", &max);
    }

    printf("\nI multipli di %d sono: ", div);

    for(int i=1; i<=max/div; i++){
        printf("%d ", mul);

        mul=mul+div;
        sum=sum+mul;
        cnt++;
        media=sum/cnt;

    }

    printf("\nLa somma è : %d", sum);
    printf("\nLa media è: %.2f", media);

    
return 0;
}