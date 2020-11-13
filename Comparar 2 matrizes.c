#include <stdio.h>
#define L 2 // numero de macro linha
#define C 2 // numero de macro coluna

void main (){
int l, c, p=0;
int A[L][C], B[L][C];
int comparacao();
printf ("p=%d\n", p);

printf ("Digite os %d valores da matriz A %d por %d: ", L*C, L, C);
for (l=0; l<L; l++){// prefiro começar linha e coluna por 1, e não 0
for (c=0; c<C; c++){
    scanf("%d", &A[l][c]);
    
}}

printf ("Digite os %d valores da matriz B %d por %d: ", L*C, L, C);
for (l=0; l<L; l++){
for (c=0; c<C; c++){
    scanf("%d", &B[l][c]);
    
}}


if (comparacao(A, B)==0){
    printf("\nMatrizes iguais.");
}

else {
 printf("\nMatrizes diferentes.", p); 
}
}

int comparacao (int A[L][C], int B[L][C]){
 int l, c, p=0;
for (l=0; l<L; l++){
for (c=0; c<C; c++){
if (A[l][c]!=B[l][c]){
    p=1; //contar pontuação
}}}
return p;
}