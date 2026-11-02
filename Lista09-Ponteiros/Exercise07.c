#include<stdio.h>

void mudar(int *pa, int *pb){
    *pa += *pb;
}

int main() {
    int a, b;

    printf("A = %d, B = %d", a, b);

    mudar(&a, &b);

    printf("A = %d, B = %d", a, b);
    
    return 0;
}