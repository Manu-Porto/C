/*Uma função para ordenar grandezas*/
#include <stdio.h>

int main (){
    float maior (int quant, int *valor);
    int numeros, i;
    printf ("numero de ciclos: ");
    scanf ("%d", &numeros);
    int vetor [numeros];

    for (i=0; i < numeros; i++){
    printf ("numeros para ordenar: ");
    scanf ("%d", &vetor [i]); }

    printf ("%f", maior (numeros, vetor));
    
    return 0;
}



float maior (int quant, int *valor){
    int temp, a, b, i;
    for (b=quant; b >0; b--){
    for (a=0; a < quant-1; a++) {
if (valor[a] >= valor[a-1]) {
    temp = valor [a];
    valor [a-1] = valor [a];
    temp = valor [a-1];
    for (i=0; i < quant; i++){
        printf ("na rodada %d, numero em casa %d: %d  ", b, i, valor[i]);
    }}}
    return valor;
}
