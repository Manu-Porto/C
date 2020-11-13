//Area ( https://www.urionlinejudge.com.br/judge/pt/problems/view/1012 )

#include <stdio.h>
int main () {
    float A, B, C;
    float TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
scanf ("%f %f %f", &A, &B, &C);

// a) a área do triângulo retângulo que tem A por base e C por altura.
TRIANGULO = A * C / 2;

// b) a área do círculo de raio C. (pi = 3.14159)
CIRCULO =  C * C * 3.14159;

// c) a área do trapézio que tem A e B por bases e C por altura.
TRAPEZIO = ( A + B ) * C / 2;

// d) a área do quadrado que tem lado B.
QUADRADO = B * B;

// e) a área do retângulo que tem lados A e B.
RETANGULO = A * B;


printf ("\nTRIANGULO: %.3f \n", TRIANGULO);
printf ("CIRCULO: %.3f \n" , CIRCULO);
printf ("TRAPEZIO: %.3f \n", TRAPEZIO);
printf ("QUADRADO: %.3f \n", QUADRADO);
printf ("RETANGULO: %.3f \n", RETANGULO);

return 0;
} 