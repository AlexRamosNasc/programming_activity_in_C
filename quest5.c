#include <stdio.h>
#include <stdlib.h>

int potencia(int a, int b){
    int result = a, num = 1;

    if(b == 0){
        result = 1;
    }
    else{
        while(num < b){
        result *= a;
        num++;
        }
    }
    return result;
}

int main(){
    int a, b;

    printf("digite o numero que quer elevar: \n");
    scanf("%d", &a);

    printf("digite seu expoente: \n");
    scanf("%d", &b);

    printf("resultado = %d", potencia(a, b));

    return 0;
}