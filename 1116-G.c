#include <stdio.h>
int main () {

    int N, i;
    scanf ("%d", &N);
    float X, Y, r;

    for (i=1 ; i <= N ; i++) {
        scanf ("%f %f", &X, &Y);
        if (Y==0) {
        printf ("divisao impossivel\n"); }
        else {
    r = X/Y;
    printf ("%.1f\n", r); }}
    
    return 0; }
