//Realizzare un programma C che permetta di inserire 3 valori da tastiera, comunica il valore massimo e minimo
//inserito e per ognuno dei tre valori visualizza la scomposizione in fattori primi.

#include <stdio.h>
int main (void) {
    int v1=0;
    int v2=0;
    int v3=0;

    printf("Inserisci un valore intero: ");
    scanf("%d", &v1);

    printf("Inserisci un valore intero: ");
    scanf("%d", &v2);

    printf("Inserisci un valore intero: ");
    scanf("%d", &v3);

    if (v1>v2 && v1>v3) {
        printf("%d è il valore maggiore\n", v1);
    }

    if (v2>v1 && v2>v3) {
        printf("%d è il valore maggiore\n", v2);
    }

    if (v3>v1 && v3>v2) {
        printf("%d è il valore maggiore\n", v3);
    }

    if (v1<v2 && v1<v3) {
        printf("%d è il valore minore\n", v1);
    }

     if (v2<v1 && v2<v3) {
        printf("%d è il valore minore\n", v2);
    }

     if (v3<v2 && v3<v1) {
        printf("%d è il valore minore\n", v3);
    }


    



return 0;
}