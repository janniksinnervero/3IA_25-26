//contiene codici C delle funzioni della libreria
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

    int div=0; 
    int cnt=0;

    while(div<a){
        div++;
        if(a%div==0){
            cnt++;
        }
    }
    if(cnt==2){
        return true;
    }
    else{
        return false;
    }
}

void viewPrimi (int a, int n_val){

     int val=0;
     int cnt=0;
     int div=0;

     srand(time(NULL));

     while(cnt!=n_val){
        val=1+rand()%val;
        if((val>=1) && (val<=999))
     }


}