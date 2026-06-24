#include <stdio.h>

int soma(int x){
    int soma = 0;
    for(int i = x; i >= 0; i--){
        soma += x - i;
    }
    return soma;
}

int main(){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("A soma dos numeros de 0 a %d é = %d", x, soma(x));
    return 0;
}
