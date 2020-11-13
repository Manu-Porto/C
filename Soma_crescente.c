/*Soma de 1 a N*/
//Soma_crescente.c:11:15: warning: implicit declaration of function 'soma' [-Wimplicit-function-declaration]

#include <stdio.h>

int main () {
unsigned int N;
int fatorial (int N);

printf ("Working :) \n")
printf ("Soma Crescente!\nInsira o numero a se encontrar a soma de 1 a N:");
scanf ("%d", &N);
printf ("%d", soma (N));
}

int soma (int N){
    if (N<=1){
        return 1;
    }
    else {
        return (N+soma(N-1));
    }
}