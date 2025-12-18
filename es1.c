//Realizzare un programma C che permetta di inserire 5 valori interi, al termine dell’inserimento comunica il
//valore minore e maggiore inserito e la media dei valori.
#include <stdio.h>
int main (void) {
    int v1=0;
    int v2=0;
    int v3=0;
    int v4=0;
    int v5=0;

    float med=0;
    int sum=0;

    printf("Inserisci un valore intero: ");
    scanf("%d", &v1);

    printf("Inserisci un valore intero: ");
    scanf("%d", &v2);

    printf("Inserisci un valore intero: ");
    scanf("%d", &v3);

    printf("Inserisci un valore intero: ");
    scanf("%d", &v4);

    printf("Inserisci un valore intero: ");
    scanf("%d", &v5);

    if (v1>v2 && v1>v3 && v1>v4 && v1>v5) {
        printf("%d è il valore maggiore\n", v1);
    }

    if (v2>v1 && v2>v3 && v2>v4 && v2>v5) {
        printf("%d è il valore maggiore\n", v2);
    }

    if (v3>v1 && v3>v2 && v3>v4 && v3>v5) {
        printf("%d è il valore maggiore\n", v3);
    }

    if (v4>v1 && v4>v2 && v4>v3 && v4>v5) {
        printf("%d è il valore maggiore\n", v4);
    }

    if (v5>v1 && v5>v2 && v5>v4 && v5>v3) {
        printf("%d è il valore maggiore\n", v5);
    }


    if (v1<v2 && v1<v3 && v1<v4 && v1<v5) {
        printf("%d è il valore minore\n", v1);
    }

    if (v2<v1 && v2<v3 && v2<v4 && v2<v5) {
        printf("%d è il valore minore\n", v2);
    }

    if (v3<v1 && v3<v2 && v3<v4 && v3<v5) {
        printf("%d è il valore minore\n", v3);
    }

    if (v4<v1 && v4<v2 && v4<v3 && v4<v5) {
        printf("%d è il valore minore\n", v4);
    }

    if (v5<v1 && v5<v2 && v5<v3 && v5<v4) {
        printf("%d è il valore minore\n", v5);
    }

    sum=v1+v2+v3+v4+v5;
    med=sum/5;

    printf("la media dei 5 valori inseriti è: %.2f", med);
return 0;
}