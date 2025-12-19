#include <stdio.h>
int main (void) {
    const int step=5, min=10, max=100;

    printf("MULTIPLI DI 5 DA 10 A 100\n");

    for(int n=min; n<=max; n++) {
      if (n%step==0) {
        printf("%d", n);

        if(n<100){
            printf(", ");
        }
     }
    }
return 0;
}