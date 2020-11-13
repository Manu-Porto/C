//     Faça um programa que leia um vetor de 
//     TAM definido como macro e imprima os elementos do vetor
//     e o maior valor armazenado. Use a função rand%20, 
//     para preencher o vetor.


#include <stdio.h>
#include <stdlib.h>
int main () {
#define TAM 3

int A[TAM], i, r;
srand(time(NULL));

for (i=0; i<TAM ; i++) {
A[i] = rand()%20;
printf ("%d ", A[i]);
if (A[i]>A[i-1])
r=A[i];
}
printf ("O maior numero desse vetor e: %d", r);

return 0; }

//warning: implicit declaration of function 'time' [-Wimplicit-function-declaration]
//Não sei o que significa