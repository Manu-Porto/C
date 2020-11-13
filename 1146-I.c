#include <stdio.h>
int main () {
    int N, i;
    
 do{
     scanf ("%d", &N);
     for (i=1; i!=N && N!=0; i++) {
     printf ("%d ", i);}
     printf ("%d\n", N);
     }  while ( N!=0);
 return 0;
}
