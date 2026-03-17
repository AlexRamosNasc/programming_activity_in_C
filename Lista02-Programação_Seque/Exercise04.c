#include <stdio.h>

float main()
{
    float Salario,Porcentagem,Nsalario,Almento;
    scanf("%f %f",&Salario,&Porcentagem);
    Almento = Salario * (Porcentagem / 100);
    Nsalario = Salario + Almento;
    printf("Aumento = %.2f\n",Almento);
    printf("Novo salario = %.2f\n",Nsalario);
}
