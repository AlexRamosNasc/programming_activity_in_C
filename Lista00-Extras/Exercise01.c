#include <stdio.h>

int main(){
    int X, Acima = 0, Abaixo = 0;
    float Salario, Media, Soma = 0;
    
    for(X = 1; X <=3; X++){
        scanf("%f", &Salario);
        Soma = Soma + Salario;
         if(Salario > 1518){
            Acima++;
        }
    }
    Media = Soma / 3;
    printf("Media de Salario: %.2f\n", Media);
    printf("Numero de pessoas acima do salario minimo: %d\n", Acima);

    return 0;
}
