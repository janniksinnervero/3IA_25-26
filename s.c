#include <stdio.h>
int main () {
    int n1=0;
    int n2=0;
    int p=0;
    int i=0;

    printf("Inserisci un valore intero positivo: ");
    scanf("%d", &n1);

    while (n1<0) {
        printf("Il valore inserito non è valido. Riprova: ");
        scanf("%d", &n1);
    }

    printf("\nInserisci un valore intero positivo: ");
    scanf("%d", &n2);

    while (n2<0) {
        printf("Il valore inserito non è valido. Riprova: ");
        scanf("%d", &n2);
    }

    for(i=0; i < n2; i++) {
        p=p+n1;
    }

    printf("\nIl prodotto dei due numeri è %d", p);

    return 0;
}