#include <stdio.h>

int main() {
    int Num, i = 1, Resto = 0;
    
    scanf("%d", &Num);
    
    while(i != Num){
        if(Num % i == 0){
            Resto += i;
        }
        i++;
    }
    printf("%d\n", Resto);
    if(Resto == Num){
        printf("É um número perfeito");
    }
    else{
        printf("Não é um número perfeito");
    } 
  
    return 0;
}
