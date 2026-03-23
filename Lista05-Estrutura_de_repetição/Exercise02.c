#include <stdio.h>
#include <math.h>

int main(){
    int I, Exponte = 2;
    float Peso, Altura, IMC;
    
    for(I = 1; I <= 10; I++){
        scanf("%f %f", &Altura, &Peso);
        IMC = Peso / pow(Altura,2);
        printf("IMC: %.2f\n", IMC);
    }
}
