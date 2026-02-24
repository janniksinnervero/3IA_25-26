#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void){
    
    int ran=0;
    int sum=0;
    int div=1;

    srand(time(NULL));

    for(int i; i<=15; i++){
        ran=1+rand()%50;
        printf("%d", ran);
        if(ran%2==0){
            printf("PARI");
        }
        else{
            printf("DISPARI");
        }
        while(div<=ran){
            if(ran%div==0){
                sum=sum+div;
            }
        div=div+1;
        }
        
        if(sum==(ran*2)){
            printf("PERFETTO");
        }
        else{
            printf("NON PERFETTO");
        }
    }
    
}