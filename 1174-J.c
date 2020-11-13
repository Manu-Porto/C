//Selecao em Vetor I

#include <stdio.h>
int main () {

#define y 10
int i;
float A[10]; 



   for (i = 0; i < y ; i++)  { 
    scanf("%f", &A[i]);}

    for (i = 0; i < y; i++)  { 
    if (A[i]<=10)
    printf ("A[%i] = %.1f \n", i, A[i]);}

return 0;
}