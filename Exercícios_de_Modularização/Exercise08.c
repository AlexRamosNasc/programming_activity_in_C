#include <stdio.h>

int primo(int x){
    int soma = 0, divt = 0;
    for(int i = x; i > 1; i--){
        soma = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                soma++;
            } 
        }
        if(soma == 2){
            divt++;
        }
    }
    soma = 0;
    for(int i = 1; i <= x; i++){
        if(x % i == 0){
            soma++;
        } 
    }
    if(soma == 2){
        divt--;
    }
    return divt;
}

int main(){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("A quantidade de numeros primos abaixo de %d eh = %d", x, primo(x));
    return 0;
}
