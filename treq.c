/*
  l'utente inserisce un carattere c e un intero l tra 1 e 70 (controllare);
  stampare, con due for annidati, un triangolo equilatero di lato l;
*/

#include <stdio.h>
int main (){

    int l=0;
    char c;

    printf("Inserisci un valore intero compreso tra 1 e 70: ");
    scanf("%d", &l);
    while (l>70 || l<0) {
        printf("Valore inserito non valido. Riprova: ");
        scanf("%d", &l);
    }

    printf("Seleziona un carattere: ");
    scanf(" %c", &c);

    for (int cnt_l=0; cnt_l<l; cnt_l++) {
        printf("%c", c);

        for(int cnt_c=0; cnt_c<cnt_l; cnt_c++){
            printf("%c", c);
        }
    printf("\n");
    }

    return 0;
}