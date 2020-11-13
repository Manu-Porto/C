
#include <stdio.h>
int main () {

int i, n, X, Y;
    
      for (i = 0; i <= n && X!=Y; i++) {
        scanf ("%f %f", &X, &Y);
        if (X > Y)
        printf ("Decrescente\n");
        if (Y > X)
        printf ("Crescente\n");
      }
      
    return 0;
}
