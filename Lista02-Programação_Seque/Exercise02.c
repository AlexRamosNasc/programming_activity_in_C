#include <stdio.h>
#include <math.h>

int main()
{
    float Area,Raio,Perimetro;
    float Pi = M_PI;
    scanf("%f",&Raio);
    Area = Pi *  pow(Raio,2);
    Perimetro = 2 * Pi * Raio;
    printf("A = %.2f\n",Area);
    printf("P = %.2f\n",Perimetro);
}
