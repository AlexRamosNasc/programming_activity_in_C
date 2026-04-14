#include <stdio.h>

int main()
{
    float Valores[20];
    float Media, Soma = 0;
    int Quantos = 0; 
    
    for(int I = 0; I < 20; I++){
        scanf("%f", &Valores[I]);
        Soma += Valores[I];
    }
    
    Media = Soma / 20;
    printf("Altura média: %.2f\n", Media);
    
    for(int I = 0; I < 20; I++){
        if(Valores[I] > Media){
            Quantos++;
        }
    }
    printf("Quantidade de pessoas acima da média: %d", Quantos);
    
    return 0;
}
