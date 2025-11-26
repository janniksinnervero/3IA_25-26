#include <stdio.h>
int main (void){
    int anno=0;
    int mese=0;

    printf("Inserisci l'anno: ");
    scanf("%d", &anno);
    printf("Inserisci il mese: ");
    scanf("%d", &mese);

    switch (mese) {
        case 1:{
            printf("Il mese ha 31 giorni\n");
            break;
        }
        case 3: {
            printf("Il mese ha 31 giorni\n");
            break;
        }
        case 5: {
            printf("Il mese ha 31 giorni\n");
            break;
        }
        case 7: {
            printf("Il mese ha 31 giorni\n");
            break;
        }
        case 8: {
            printf("Il mese ha 31 giorni\n");
            break;
        }
        case 10:{
            printf("Il mese ha 31 giorni\n");
            break;
        }
        case 12:{
            printf("Il mese ha 31 giorni\n");
            break;
        }
        case 4: {
            printf("Il mese ha 30 giorni\n");
            break;
        }
        case 6: {
            printf("Il mese ha 30 giorni\n");
            break;
        }
        case 9: {
            printf("Il mese ha 31 giorni\n");
            break;
        }
        case 11: {
            printf("Il mese ha 31 giorni\n");
            break;
        }
        case 2:
            if (anno%4==0){
                printf("Il mese ha 29 giorni (ANNO BISESTILE)\n");
            }
            else {
                printf("Il mese ha 28 giorni\n");
            }
            break;
    default:
        break;        
    }

    return 0;
}        