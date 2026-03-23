#include <stdio.h>

int main(){
    int X;
    float Salario, Media, Soma = 0;
    for(X = 1; X <=150; X++){
        scanf("%f", &Salario);
        Soma = Soma + Salario;
    }
    Media = Soma / 150;
    printf("Media de Salario: %.2f\n", Media);

    return 0;
}
