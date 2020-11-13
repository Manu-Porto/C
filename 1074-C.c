//Par ou ímpar

#include <stdio.h>
int main () {
    int N, i, x, y;
    scanf ("%d", &N);

for (i=0 ; i <= N; i++) {
    scanf ("%d", &x);
    y=x;
    
if (x=0) {
printf ("NULL\n");}

else {
{
 if (x%2==0) 
 printf ("EVEN ");
 else 
 printf ("ODD ");
 }

{
    if (y<=0) 
 printf ("NEGATIVE\n");
 else 
 printf ("POSITIVE\n");
}
}
}
}