#include <stdio.h>

int main(){
    
    float V, E;
    
    scanf ("%f", &V);
    
    E = (V - 60) * 10;
    
    if (V > 60){
        printf ("Multado\n");
        printf ("Valor da multa: R$ %.2f", E);}
}
