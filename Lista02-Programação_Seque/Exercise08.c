#include <stdio.h>
#include <math.h>

float main()
{
    float t,Q;
    scanf("%f",&t);
    Q = 2048 * pow(2,-0.5 * t);
    printf("%.4f",Q);
}
