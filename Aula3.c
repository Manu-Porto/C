// O professor sugeriu um exercício que calculassemos o salario de 
// um cara considerando 20 reais por ia e 8% de impostos. O salário 
// seria dado em função dos dias trabalhados. Iniciei definido renda 
//e impostos usando "include" para praticar o controle. 

#include <stdio.h>
#include <math.h>


int main () 
{

#define RendaDiaria 20                 // Caso necessario mudar no futuro, mudar o que vem apos RendaDiaria
#define ImpostoDeRenda 8               // Caso necessario mudar no futuro, mudar o que vem apos ImpostoDeRenda

float R = (100-ImpostoDeRenda);        //Subtração para achar o valor do que resta do imposto de renda para o homem


printf ("Quantos dias foram trabalhados?");
float W_Dias;
scanf("%f", &W_Dias);  


float W_Salario = (W_Dias*RendaDiaria*R)/100; //Aqui está o calculo da renda. O R vem de 100-Imposto.
printf ("O homem deve receber, em reais: \n %.2f \n", W_Salario);                       // Resultado.

return 0;
}