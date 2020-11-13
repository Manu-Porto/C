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
#define W 15
int main () {
   int i, x, p=0, im = 0, count;
   int par[W];
   int impar[W];


// encaixar todos os valores em pares ou impares
   for (i=0; i<W; i++ ){
       scanf ("%d", &x);

       if (x%2==0){
       par[p]=x;
       p=p+1;

//printf ("p = %d\n", p);
          if (p==5){
              for (count=0; count != 5; count++){
              printf ("par[%d] = %d\n", count, par[count]);
              }
              p=0;}}



        else {
        //printf ("im = %d\n", im);
        impar[im]=x;
        im=im+1;

          if (im==5){
              for (count=0; count != 5; count++){
              printf ("impar[%d] = %d\n", count, impar[count]);
              }
              im=0;}
       }
   }

if (im!=0){
    for (count=0; count != im; count++){
              printf ("impar[%d] = %d\n", count, impar[count]);
              }
              im=0;}
if (p!=0){
    for (count=0; count != p; count++){
              printf ("par[%d] = %d\n", count, par[count]);
              }
              p=0;}

   return 0;}





