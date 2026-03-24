#include <stdio.h>

int main(){
    int Num;
    for(int I = 1; I <= 30; I++){
        scanf("%d", Num);
        if(I == 1){
            Maior = Num;
            Menor = Num;
        }
        if(Num > Maior){
            Maior = Num;   
        }
        if(Num < Menor){
            Menor = Num;
        }
    }

printf("Maior: %d\nMenor: %d\n", Num, Num)
}

terminar
