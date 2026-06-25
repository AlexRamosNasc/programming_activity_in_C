#include <stdio.h>

int fun(int *px, int *py){
    int soma;
    *px *= 2;
    *py *= 2;
    
    return (*px) + (*py);
}

int main(){
    int x = 10, y = 3;

    printf("Valor de 2A + 2B = %d\n", fun(&x, &y));

    printf("x vale %d\n", x);
    printf("y vale %d\n", y);

   return 0;
}
