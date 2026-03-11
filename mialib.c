//contiene codici C delle funzioni della libreria
#include <stdbool.h>
#include <stdio.h>
bool ternaPit (int a, int b, int c){
    int a2=a*a;
    int b2=b*b;
    int c2=c*c;
    
    if (a2+b2==c2){
        return true;
    }

    else {
        return false;
    }
}

bool numPerf(int num){
    int div=1;
    int sum=0;

    while (div<num){
        if(num%div==0){
            sum=sum+div;
        }
        div++;
    }

    if(num==sum){
        return true;
    }

    else{
        return false;
    }
}
