/* Desafio 4 da Avaliação 2.
Desafio 1183 do URI Online Judge 
Manuella Porto e Tiago Freitas
Início de Abril de 2020*/ 

/*Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz
M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles
elementos que estão acima da diagonal principal da matriz, conforme ilustrado abaixo (área
verde).*/


#include <stdio.h>
#define W 10
int main () {

    float caractere;
    scanf ("%c", &caractere);

    int matriz [W][W];
    int l=0, c=0;

    for (l=0; l < W; l++){
    for (c=0; c <= W; c++) {
        scanf ("%f", &matriz[l][c]);}}


    for (l=0; l < W; l++){
    for (c=0; c <= W; c++) {
        printf ("matriz[&d] [&d] = %f", matriz[l][c]);
    }
    printf ("\n");
}


return 0;
}

int espaco (x[])