#include <stdio.h>
int main (void) {
    int val=0;
    int tmp=0;
    char junk;
    int div=0;

    printf("Inserisci un valore intero: ");
    scanf("%d", &val);
    junk=getchar();

    if (val>25) {
        tmp=val;
        while (tmp<=50){
            printf("%d ", tmp);
            tmp=tmp+1;
        }
    }
    else {
        printf("Serie non realizzabile\n");
    }
while (div<val){
    div=div+1;
    if (val%div==0){
        printf("%d è un divisore di %d\n ", div, val);
    }

}
return 0;
}