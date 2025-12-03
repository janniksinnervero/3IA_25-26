#include <stdio.h>
int main (void) {

    int c1=9;
    int c2=2;
    int c3=4;
    int c4=2;
    int c5=3;

    int u1, u2, u3, u4, u5=0;

    int count=0;

    printf("Inserisci 5 valori da 1-9: ");
    scanf("%d %d %d %d %d", &u1, &u2, &u3, &u4, &u5);

    while (u1!=c1 || u2!=c2 || u3!=c3 || u4!=c4 || u5!=c5) {
        count=count+1;
        if (u1==c1) {
            printf("%d ", c1);
        }
        else {
            printf("? ");
        }
        if (u2==c2) {
            printf("%d ", c2);
        }
        else {
            printf("? ");
        }
        if (u3==c3) {
            printf("%d ", c3);
        }
        else {
            printf("? ");
        }
        if (u4==c4) {
            printf("%d ", c4);
        }
        else {
            printf("? ");
        }
        if (u5==c5) {
            printf("%d ", c5);
        }
        else {
            printf("? ");
        }
        printf("Riprova!\n");
        printf("Inserisci 5 valori da 1-9: ");
    scanf("%d %d %d %d %d", &u1, &u2, &u3, &u4, &u5);
    }
     if (u1==c1 && u2==c2 && u3==c3 && u4==c4 && u5==c5) {
            count=count+1;
            printf("Codice corretto!\n");
            printf("Numero tentativi: %d", count);
        }
return 0;