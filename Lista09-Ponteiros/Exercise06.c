#include<stdio.h>

int mudar(int *pa, int *pb){
    *pa *= 2;
    *pb *= 2;
    return *pa + *pb;
}

int main(){
    int a, b, soma;

    scanf("%d %d", &a, &b);

    printf("A = %d, B = %d\n", a, b);

    soma = mudar(&a, &b);

    printf("A = %d, B = %d, Soma = %d\n", a, b, soma);

    return 0;
}