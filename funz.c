#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/**
 * verifica se un numero è primo oppure no
 * @param int numero da testare
 * @return boolean true/false
 */
bool ver_primo(int _n);

/**
 * Checks whether a numer is perfect or not
 * @param int number to test
 * @return boolean true/false
 */
bool ver_perf(int num);



int main (void){
    int menu=0;

    printf("Seleziona un' opzione: \n");
    printf("1 -> Verifica un numero primo\n");
    printf("2 -> Verifica un numero perfetto\n");
    printf("3 -> Verifica un numero è una terna pitagorica\n");

    scanf("%d", &menu);

    switch(menu){

        case 1: {
            ver_primo;
        }
    }




    return 0;
}


bool ver_primo(int _n){
    int div=1;
    int cnt=0;

    printf("Inserisci un valore intero: ");
    scanf("%d", &_n);

    for(div=1; div<=_n; div++){
        if (_n%div==0){
            cnt++;
        }
    }

    if(cnt<=2){
        return(true);
    }
    else{
        return(false);
    }   
}

bool ver_perf(int num){
    int div=1;
    int sum=0;

    printf("Inserisci un valore intero: ");
    scanf("%d", &num);

    for(div=1; div<=num; div++){
        if (num%div==0){
            sum=sum+div;
        }

        if(sum==num){
            return(true);
        }
        else{
            return(false);
        }
    }
}