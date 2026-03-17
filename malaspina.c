#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){

    int n=0, cnt=0, nRand1=0; 
    int div=0, cnt2=0, sum=0;
    int nRand2=0;
    const int maxRand1=25;
    const int maxRand2=10;

    printf("Inserisci un valore: ");
    scanf("%d", &n);

    if((n>=5) && (n<=25)){
        srand(time(NULL));
        while(cnt<n){
            nRand1=1+rand()%maxRand1;
            printf("\n%d: ", nRand1);
            if (nRand1%2==0){
                while(div<nRand1){
                    div++;
                    if(nRand1%div==0){
                        printf("%d ", div);
                    }
                }
            }

            else{
                while(cnt2<nRand1){
                    nRand2=1+rand()%maxRand2;
                    printf("%d ", nRand2);
                    cnt2++;
                    sum=sum+nRand2;
                }
                printf("---> SOMMA: %d", sum);
            }
            cnt++;
        }

    }

    else{
        while(div<n){
            div++;
            if(n%div==0){
                cnt++;
            }
        }
        if(cnt==2){
            printf("\nNUMERO PRIMO");
        }
        else{
            printf("\nNUMERO NON PRIMO");
        }
        
    }
    return 0;
}