#include <stdio.h>
#include <stdlib.h>
#define N 10


int calcula_maior (int N, int X[]) {
    
    int a=0, i;
    srand(time(NULL));

    for (i=0; i <=N; i++) {
        X[i] = rand() % 20;
        printf ("%d",  X[i]);
        if (X[i]>a);
        a = X[i];
    }
    return a;
}

int main (){ 
    int b;
    int X[N];
    b =  calcula_maior(N, X);
    printf ("%d", b);
    return 0;
}

