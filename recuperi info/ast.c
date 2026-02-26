#include <stdio.h>
int main (void) {

    int rig=0;
    int col=0;
    int i=0;
    int j=0;

    printf("Inserisci numero righe: ");
    scanf("%d", &rig);

    int tmp_r=rig;

    printf("Inserisci numero colonne: ");
    scanf("%d", &col);

    int tmp_c=col;

    for (i=0; i<tmp_r; i++){
        for(j=0; j<tmp_c; j++){
            printf("* ");
        }
        tmp_c--;
        printf("\n");
        if(tmp_r){
            
        }
    }
return 0;
}