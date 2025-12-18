#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main (void) {
    const int MAX = 100;
    srand(time(NULL));

    int n;

    do{
        n=1+rand() %100;
        printf("%d ", n);
    }
    while (n!=100);

    
    return 0;
} 