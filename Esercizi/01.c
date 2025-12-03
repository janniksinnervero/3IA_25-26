#include <stdio.h>
int main (void) {
        int v=0;
        char junk;

        printf("inserisci un valore intero: ");
        scanf("%d", &v);
        junk=getchar();
        if (v>0){
                printf("il valore è positivo\n");
        }
        if (v==0){
                printf("il valore è negativo\n");
        }
        if (v<0){
                printf("il valore è negativo\n");
        }
        return 0;
}