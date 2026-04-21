#include <stdio.h>
#include "lib_ver.h"

int inputNumeroFiltrato (int _x, int _y, int _z){
    int n=0;
    _x=4;
    _y=50;
    _z=3;

    printf("\nInserisci un valore intero: ");
    scanf("%d", &n);

    if ((n>=_x) && (n<=_y) && (n%_z==0)){
        return n;
    }

    else{
        printf("Nessun valore ritornato");
    }
}

int trovamiPrimo (int _x, int _n){
    int cntPrimi=0;
    int cntDiv=0;

    while (cntPrimi>_n){
        int div=0;
        _x++;
        while(div<_x){
            div++;
            if(_x%div==0){
                cntDiv++;
            }
        }
        if(cntDiv==2){
            cntPrimi++;
        }
        if (cntPrimi==_n){
            int n=_n;
            return n;
        }
    }

int ordinaTreValori (int _x, int _y, int _z){
    
    int* x=_x;
    int* y=_y;
    int* z=_z;
    int tmp=0;

    if(_x>_y){
        tmp=*x;
        x*=*y;
        *y=tmp;
    }

    if(_y>_z){
        tmp=*y;
        *y=*z;
        *z=tmp;
    }

    if(_x>_z){
        tmp=*x;
        *x=*z;
        *z=tmp;
    }

    return *x;
    return *y;
    return *z;

    
}

int determinaFigura (int _x, int _y){
    int a=0;
    if((_x==0) || (_y==0)){
        a=-1;
    }

    if(_x!=_y){
        a=_x*_y;
    }

    if(_x==_y){
        a=_x*_y;
    }

    return a;
}

}
