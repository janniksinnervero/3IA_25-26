#include <stdio.h>
int main (void) {

    int r=5;
    int c=5;

    int c_c=0;
    int c_r=0;

    while (c>c_c) {
        printf("+ ");
        c_c=c_c+1;
    }
    
    c=c-1;
    c_c=0;
    printf("\n  ");

    while (c>c_c) {
        printf("+ ");
        c_c=c_c+1;
    }

    c=c-1;
    c_c=0;
    printf("\n    ");

    while (c>c_c) {
        printf("+ ");
        c_c=c_c+1;
    }

    c=c-1;
    c_c=0;
    printf("\n      ");

    while (c>c_c) {
        printf("+ ");
        c_c=c_c+1;
    }

    c=c-1;
    c_c=0;
    printf("\n        ");

    while (c>c_c) {
        printf("+ ");
        c_c=c_c+1;
    }


}