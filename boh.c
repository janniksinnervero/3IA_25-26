/* Programma che richiede un numero da tastiera intero positivo,
se il numero è inferiore a 25 allora mostra tutti i valori dal valore
inserito fino al valore 50; altrimenti visualizza un messaggio generico
"Serie non realizzabile".
*/

#include <stdio.h>
int main (void) {
    int n=0;
    int temp=0;

    printf("Inserisci un valore intero: ");
    scanf("%d", &n);

    temp=n;
    
    if(n<25){
        printf("VALORI DA %d A 50\n", n);
        while (temp<=50) {
            printf("%d", temp);
            temp=temp+1;
            if(temp<=50){
                printf(", ");
            }
        }
    }
    else{
        printf("SERIE NON REALIZZABILE");
    }
return 0;
}