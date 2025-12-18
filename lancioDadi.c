//lancia due dadi e visualizza i risultati
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main (void) {
    const int n_facce = 6;

      srand(time(NULL));

    int n;
    int c=0;

    printf("dadi: ");
    do{
        n=1+rand() %n_facce;
        printf("%d ", n);
        c=c+1;
    }
    while (c<2);

    return 0;
}