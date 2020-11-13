#include <stdio.h>
int main () {

    int m, n, i=1, l=0, k=0, a=0, b=0, c=0, d=0;
    int A[3][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
printf ("Essas sao as posicoes:\n_____________________\n|_0_0_||_0_1_||_0_2_|\n|_1_0_||_1_1_||_1_2_|\n|_2_0_||_2_1_||_2_2_|\n\n");
do {

    i%2==0 ? printf ("Vez do jogador 2\nDigite sua posicao:") : printf ("Vez do jogador 1\nDigite sua posicao:");
    scanf ("%d %d", &m, &n);

   

    if (A[m][n] != 0){
        printf ("Esse lugar ja foi preenchido!\n");}

    else {
      A[m][n]=i;
      i=i+1;
    printf ("_____________________\n");

    for (m = 0; m != 3; m++){
    for (n = 0; n != 3; n++){

    if (A[m][n]==0){
        printf ("|_%d_%d_|", m, n);}


    else {

    if (A[m][n]%2==0) {
    printf ("|__X__|");
    A[m][n] = 2;}

    /*Atribui novos valores a A para encontrar o vencedor pela soma esccolhendo valores que 
    não fossem multiplos um do outro nem de 3. */

    else
    {printf ("|__O__|");
    A[m][n] = 5; }}  
    }

    printf ("\n");} 
    printf ("\n\n");}


//Aqui é o estudo da velha
    
    for (l=0; l <= 2; l++){
a = A[0][l] + A[1][l] + A[2][l];
b = A[l][0] + A[l][1] + A[l][2];
c = A[0][0] + A[1][1] + A[2][2];
d= A[0][2] + A[1][1] + A[2][0];
    if (a==6 || b==6 || c==6 || d==6){
        printf ("O Jogador 2 ganhou!\n");
        i=10;
        }
    else if  (a==15 || b==15 || c==15 || d==15){
        printf ("O Jogador 1 ganhou!\n");
        i=10;}  }
    

    

    

    
    } while (i < 10);
   printf ("Fim de jogo.");

   return 0;
}


