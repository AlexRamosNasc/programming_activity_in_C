#include <stdio.h>

int multi(int x){
    int mult = x;
    for(int i = (x - 1); i >= 1; i--){
        mult *= x - i;
    }
    return mult;
}

int main(){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("O fatorial de %d eh = %d", x, multi(x));
    return 0;
}
