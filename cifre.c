#include <stdio.h>

void reverse(int a){
    int tmp1=0;
    int tmp2=0;
    int div=10;

    tmp1=a/div;
    printf("%d", tmp1);

    while (tmp1>0.9){
        div=div*10;
        tmp2=a/div;
        printf("%d", tmp2);
    }
    
}
int main (void){
    int a=0;

    printf("Inserisci un valore intero: ");
    scanf("%d", &a);

    reverse (a);

    return 0;
}