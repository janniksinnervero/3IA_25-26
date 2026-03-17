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

bool ver_perf(int a){
    int div=1;
    int sum=0;

    while (div<a){
        if(a%div==0){
            sum=sum+div;
        }
        div++;
    }

    if(a==sum){
        return true;
    }

    else{
        return false;
    }
}

bool ver_primo (int a){
    while(div<a){
        div++
        if(a%div==0){
            cnt++
        }
    }
    if(cnt==2){
        return true;
    }
    else{
        return false;
    }
}
