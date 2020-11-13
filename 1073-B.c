#include <stdio.h>
int main () {
    
    int N, i, v=0, r=0;
    scanf ("%d", &N);

    if (N%2==1)
    v=N-1;
    else 
    v = N;
   

if (N >= 6 && N <= 1999) {
for (i=1 ; i<=(v/2) ; i++) {
    r=4*i*i;
    printf ("%d^2 = %d\n", 2*i , r ); }


}

return 0;
}