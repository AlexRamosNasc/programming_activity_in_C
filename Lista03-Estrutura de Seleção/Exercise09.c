#include <stdio.h>

int main(){
    
    float Valor, Compra;
    
    scanf ("%f", &Valor);
    if (Valor < 100){
        Compra = Valor + (Valor * 0.4);
        printf ("Valor de venda: R$ %.2f", Compra);
    }
    else{
        Compra = Valor + (Valor * 0.3);
        printf ("Valor de venda: R$ %.2f", Compra);
    }
}
