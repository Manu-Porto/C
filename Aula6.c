#include <stdio.h>
int main () {
    printf ("Digite um numero:");
    int n, count = 0;
    scanf ("%d", &n);

    do  
   {n = n/10;
    count++;} 
     while (n != 0);

    printf ("Ele tem %d algarismos. N vale %d", count, n);

return 0;
}