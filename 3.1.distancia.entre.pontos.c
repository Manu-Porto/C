/*1. Distancia entre pontos
Crie um orograma que le as codenadas x y de 2 pontos e calcule a distancia entre eles 
uau*/

#include <stdio.h>
#include <math.h>

int main () { 
float distancia (float pontoA, float pontoB);

struct ponto { //struct salvando tudinho pra ficar sussa
float a;
float b;} x, y;

printf("Show de bola, digite suas coordenadas x e y do ponto 1: ");
scanf ("%f %f", &x.a, &y.a); //X e Y do primeiro pontos guardadinhos

printf("Bacana, agora x e y do ponto 2: ");
scanf ("%f %f", &x.b, &y.b); //X e Y do ponto 2 no pote também

printf ("A distancia entre os pontos eh %.2f", distancia(x.b - x.a , y.b - y.a)); 
/*Para os desentendidos, |delta X| = |x.b - x.a| = |x.a - x.b|, o mesmo com y. 
Distancia entre dois pontos usa pitágoras.
Distancia ao quadrado = quadrado de delta x + quadrado de delta y
Isso é realizado na função distancia*/

return 0;}



float distancia (float pontoA, float pontoB){          //coloquei pq foi pedido,
float dist;                                            //mas acho mais clean trabalhar
dist = sqrt((pontoA)*(pontoA) + (pontoB)*(pontoB));    //com ele direto nesse caso
return dist;}