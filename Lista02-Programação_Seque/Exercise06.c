#include <stdio.h>

int main()
{
    float S,A,L;
    scanf("%f",&S);
    A = S * 1.20;
    L = A * 0.90;
    printf("Salario inicial = %.2f\n",S);
    printf("Salario com aumento = %.2f\n",A);
    printf("Salario liquido = %.2f\n",L);
}
