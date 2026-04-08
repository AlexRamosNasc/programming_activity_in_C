#include <stdio.h>

int main()
{
    float Peso, Altura, PesoM, AlturaM, PesoT, AlturaT;
    int Pesos = 0, Alturas = 0;
    
    scanf("%f", &Peso);
    
    while(Peso >= 0){
        PesoT += Peso;
        Pesos++;
        
        scanf("%f", &Altura);
        AlturaT += Altura;
        Alturas++;
        
        scanf("%f", &Peso);
    }
    if(Pesos == 0){
        printf("Nenhum dado válido foi registrado.\n");
    }
    else{
        PesoM = PesoT / Pesos;
        printf("Peso médio: %.2f\n", PesoM);
        
        AlturaM = AlturaT / Alturas;
        printf("Altura média: %.2f\n", AlturaM);
    }
    
    return 0;
}
