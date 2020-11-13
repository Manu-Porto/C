//Area ( https://www.urionlinejudge.com.br/judge/pt/problems/view/1015 )

#include <stdio.h>
#include <math.h> 

int main () {
    //Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano,
    //p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, 
    //mostrando 4 casas decimais após a vírgula, segundo a fórmula:

float Xa, Xb, Ya, Yb, Saida; 
scanf("%f %f %f %f", Xa, Xb, Ya, Yb);
Saida = sqrt (((Xb - Xa)*(Xb - Xa))-((Yb - Ya)*(Yb - Ya)));
printf ("%f", Saida)

return 0;
} 