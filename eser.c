#include <stdio.h>
int main (void) {
    int n_in=0;
    int div=0;
    int n_out=0;

    printf("Inserisci un valore intero: ");
    scanf("%d", &n_in);

    printf("\nI numeri compresi tra 1 e %d sono:", n_in);
    while(n_in>n_out) {
        n_out=n_out+1;
        printf("%d ", n_out);
        printf("\nI divisori di %d sono: ", n_out);
        while (div<n_out){
            div=div+1;
            if (n_out%div==0) {
                printf("%d ", div);
            }
        }
    } 
return 0;
}