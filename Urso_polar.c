/*Basicamente, sempre quis algo que fizesse o processo de Tenis-Polar para mim*/

#include <stdio.h>
#include <ctype.h>
#define W 5
/*Ela pede para contar a quantidade de letras de cada frase. Não gostei.
Farei algo como um pedido ao leitor*/

int main (){
int i;
char matriz[W] [64];

for (i=0; i<W; i++){
printf("Escreva de | |\n");
printf("|                                                           |\n|");
scanf("%c", &matriz[i]);
printf("|");
}

}