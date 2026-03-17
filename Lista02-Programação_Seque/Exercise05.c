#include <stdio.h>

int main()
{
    float Vp,Pd,D,Nv;
    scanf("%f %f",&Vp,&Pd);
    D = Vp * (Pd / 100);
    Nv = Vp - D;
    printf("Desconto = %.2f\n",D);
    printf("Novo valor = %.2f\n",Nv);
}
