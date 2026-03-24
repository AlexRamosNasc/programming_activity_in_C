#include <stdio.h>

int main(){
    int Soma = 0;
    
    for(int I = 2; I <= 1000; I += 2){
        Soma = Soma + I;
    }
printf("Soma: %d", Soma);
    return 0;
}
