#include <stdio.h>

int main(){
    float Peso, Altura, Media, Medaltura, Medpeso, Sompeso = 0, Somaltura = 0;
    
    
    for(int I = 1; I <= 20; I++){
        scanf("%f %f", &Peso, &Altura);
        Sompeso = Sompeso + Peso;
        Somaltura = Somaltura + Altura;
    }
Medpeso = Sompeso / 20;
Medaltura = Somaltura / 20;

printf("Peso médio: %.2f\nAltura média: %.2f\n", Medpeso, Medaltura);
    return 0;
}
