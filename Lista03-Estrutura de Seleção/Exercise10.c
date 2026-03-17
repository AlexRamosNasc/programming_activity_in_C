#include <stdio.h>

int main(){
    
    float C, V, Valor;
    
    scanf ("%f", &C);
    if (C <= 10){
        Valor = 15 * C;
        printf ("Valor a pagar: R$ %.2f", Valor);
    }
    if (C > 10){
        Valor = (15 * C) + 20;
        printf ("Valor a pagar: R$ %.2f", Valor);
    }
}
