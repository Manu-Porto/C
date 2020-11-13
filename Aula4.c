#include <stdio.h>

int main () {


    printf("Inlua os valores dos tres lados do triangulo:");
    char A, B, C;
    scanf ("%c \n %c  \n %c", &A, &B, &C);


    printf ("A: %c \n", A );
    printf ("B: %c \n", B );
    printf ("C: %c \n", C );

if (A + B < C || B + C < A || A + C < B || A <= 0)
    printf ("\n Nao é um triangulo. Game Over.");

else {


 if (A == C && B == C && A == C) {

    printf ("\n O triagulo eh equilatero.");
    }
    


 else {

    if  (A == C || A == B || B == C)
    printf ("\n O triagulo eh isosceles.");

    else
    printf ("\n O triagulo eh escaleno.");
    }
}


return 0;
}



