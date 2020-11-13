#include <stdio.h>
int main () {

int P, G, V, C, M;
scanf ("%i %i", &P, &G);


 if (G < P){
 C = P;
 P = G;
 G = C;}
 
 M=P+1;

    while (M <= G-1) {
        V = M % 5;

        if (V == 2 || V == 3) {
            printf ("%d \n", M);}
        M = M+1;
    }




return 0;
} 