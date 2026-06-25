#include <stdio.h>



int main(){
    int x;
    float y;
    char z;
    
    int *px;
    float *py;
    char *pz;

    px = &x;
    py = &y;
    pz = &z;

    *px = 10;
    *py = 3.14;
    *pz = 'A';

    printf("o valor de do int eh %d\n", x);
    printf("o do float eh %.2f\n", y);
    printf("o do char eh % c\n\n", z);

    *px = 30;
    *py = 5.25;
    *pz = 'B';

    printf("o valor de do int eh %d\n", x);
    printf("o do float eh %.2f\n", y);
    printf("o do char eh % c\n", z);

   return 0;
}
