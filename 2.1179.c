/* Desafio 2 da Avaliação 2.
Desafio 1179 do URI Online Judge 
Manuella Porto e Tiago Freitas
Início de Abril de 2020*/ 

/*Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores
forem pares ou ímpares. Só que o tamanho de cada um dos dois vetores é de 5 posições. Então,
cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo
novamente para os próximos números que forem lidos. Terminada a leitura, deve-se imprimir o
conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor
impar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.*/

#include <stdio.h>
int main () {
   int vetor[15], conf(x), num;
   #define w 15
   

for (n = 0; n <= w; ++n) {
scanf ("%d", &x);

if (x%2=0) {
    i=1;
    while (i <= 5) {
    x = par[i];
    ++i;
    }
    for (i=0; i<=5; i++) {
        printf ("par[%d] = %d", i, par[i]);
    }
}

else
{
    j=1;
    while (j <= 5) {
    x = impar[j];
    ++j;
    }
    for (i=0; i<=5; i++) {
        printf ("impar[%d] = %d", i, impar[i]);
}}}
return 0}



