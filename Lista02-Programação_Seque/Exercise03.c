#include <stdio.h>
#include <math.h>

int main()
{
    float Area,Altura,Perimetro,Base;
    scanf("%f %f",&Altura,&Base);
    Area = Base * Altura;
    Perimetro = 2 * (Altura + Base);
    printf("A = %.2f\n",Area);
    printf("P = %.2f\n",Perimetro);
}
