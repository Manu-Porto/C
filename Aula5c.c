#include <stdio.h>
void main () {

    printf ("Inclua tres valores: ");
    int a, b, c; 
    scanf ("%i %i %i", &a, &b, &c);
    printf ("Ta aqui: %i, %i, %i \n", a, b, c);

    int pri, seg, ter; 
    pri = 0;
    seg = 0;
    ter = 0;

if (a>=b && a>=c) {
   printf ("O maior valor eh %i \n", a) ;
   pri = a;

   if (b>=c) {
      b = seg;
      c = ter; }
   else {
      c = seg ;
      b = ter; }
      }

   
else if (b>=c && b>=a) {
   printf ("O maior valor eh %i \n ", b);
   pri = b;

   if (a>=c) {
      seg = a;
      ter = c; 
      printf ("terceiro vale: %i \n", ter);}
   else {
      seg = c;
      ter = a; 
      printf ("terceiro vale: %i \n ", ter);}
      }


else {
   printf ("O maior valor eh %i \n", c);
   pri = c;

      if (b>=a) {
      seg = b ;
      ter = a; }
   else {
      seg = a ;
      ter = b; } 
      

    printf ("terceiro vale: %i \n", ter);}

printf ("A ordem crescente eh: %i, %i e %i ", pri, seg, ter);

}
