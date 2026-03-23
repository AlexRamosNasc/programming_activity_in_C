#include <stdio.h>

int main(){
    int X;
    float Salario;
    int Acima = 0, Abaixo = 0;
    for(X = 1; X <=150; X++){
        scanf("%f", &Salario);
        if(Salario > 1518){
            Acima++;
        }
        else{
            Abaixo++;
        }
    }
    
    printf("Numero de pessoas acima do salario minimo: %d\nNumero de pessoas abaixo do salario minimo: %d\n", Acima, Abaixo);
    
    return 0;
}
