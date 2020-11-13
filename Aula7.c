#include <stdio.h>
int main () {

int p, n, i;
printf ("Digite o numero para achar o fatorial: ");
scanf("%d", &n);
printf("%d\n",n);
p = n;

for (i=1; (i+2)<n; i++) {
    printf("calma: %d , %d \n", n, i);
n = n * (p-i);
printf("%d \n", n);}




return 0;
} 



