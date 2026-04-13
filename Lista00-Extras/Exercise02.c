#include <stdio.h>

int main()
{
    float Valores[10];
    float Media, Soma = 0;
    int Quantos = 0; 
    
    for(int I = 0; I < 10; I++){
        scanf("%f", &Valores[I]);
        Soma += Valores[I];
    }
    
    Media = Soma / 10;
    printf("media = %.2f\n", Media);
    
    for(int I = 0; I < 10; I++){
        if(Valores[I] < Media){
            Quantos++;
        }
    }
    printf("quantidade = %d", Quantos);
    
    return 0;
}
