#include <stdio.h>

int main(){
    
    float A, B, C, D, Nota, Faltas;
    
    scanf ("%f %f %f %f", &A, &B, &C, &Faltas);
    Nota = (A + B + C) / 3;
    if (Nota >= 6 && Faltas < 21){
        printf ("Média final: %.2f\n", Nota);
        printf ("Aprovado");
    }
    else if (Nota >= 6 && Faltas > 21){
        printf ("Média final: %.2f\n", Nota);
        printf ("Reprovado por falta");
    }
    else if (Nota < 6 && Faltas < 21){
        printf ("Média final: %.2f\n", Nota);
        printf ("Reprovado por média");
    }
    else{;
       printf ("Média final: %.2f\n", Nota);
       printf ("Reprovado por média e falta");
    }
}
