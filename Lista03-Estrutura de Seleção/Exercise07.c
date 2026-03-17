#include <stdio.h>

int main(){
    
    float Nota, A, B, C;
    
    scanf ("%f %f %f", &A, &B, &C);
    Nota = (A + B + C) / 3;
    
    if (Nota >= 6){
        printf ("Média: %.2f\n", Nota);
        printf ("Aprovado");
    }
    else{
        printf ("Média: %.2f\n", Nota);
        printf ("Reprovado");
    }
}
