#include <stdio.h>

int soma(int a, int b){
    int soma = 0, dif, x;
    if(a > b){
        x = b + 1;
        dif = a - b;
        for(int i = 1; i < dif; i++){ 
            soma += x;
            x += 1;
        }
    }
    else if(b > a){
        x= a + 1;
        dif = b - a;
        for(int i = 1; i < dif; i++){ 
            soma += x;
            x += 1;
        }
    }
    else{
        soma = 0;
    }
    return soma;
}

int main(){
    int a, b;
    printf("Digite 2 valores: ");
    scanf("%d %d", &a, &b);
    printf("A soma dos numeros entre eles eh = %d", soma(a, b));
    return 0;
}
