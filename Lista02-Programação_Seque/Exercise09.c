#include <stdio.h>
#include <math.h>

int main(){
    float M,J,F;
    int Nm;
    scanf("%f %f %d",&M,&J,&Nm);
    
    J = J / 100;
    F = M * (pow((1 + J),Nm) - 1) / J;
    printf("Valor acumulado ao final de %d meses: R$ %.2f",Nm,F); 
}
