#include <stdio.h>

int main(){
    int Litros;
    char Tipo;
    float Valor, E = 5.99, D = 6.59, G = 6.99;
    
    scanf("%d %c", &Litros, &Tipo);
    
    if(Tipo == 'E'){
        Valor = Litros * E;
    }
    else if(Tipo == 'D'){
        Valor = Litros * D;
    }
    else if(Tipo == 'G'){
        Valor = Litros * G;
    }
    
    printf("Valor gasto: R$ %.2f", Valor);
    
    return 0;
}
