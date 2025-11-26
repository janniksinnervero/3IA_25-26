#include <stdio.h>
int main (void){
    int a=0;
    int b=0;
    int c=0;

    printf("Inserisci il primo valore: ");
    scanf("%d", &a);
    printf("Inserisci il secondo valore: ");
    scanf("%d", &b);
    printf("Inserisci il secondo valore: ");
    scanf("%d", &c);

    if (b>a) {
        if (c>b){
            printf("I numeri sono in ordine crescente\n");
        }
        else {
            printf("I numeri non sono in ordine crescente\n");
        }
    }
    else {
        printf("I numeri non sono in ordine crescente\n");
    }    
    if (a*a+b*b==c*c) {
        printf("I tre numeri formano una terna pitagorica\n");
    }
    else {
        printf("I tre numeri non sono una terna pitagorica\n");
    }
}