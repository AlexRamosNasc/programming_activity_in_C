#include <stdio.h>

int main()
{
    float I,F,C,T,D,X,KM;
    scanf("%f %f %f %f",&I,&F,&C,&T);
    D = F - I;
    X = D / C;
    KM = T * X;
    printf("KM por tanque = %.2f\n",KM);
}
