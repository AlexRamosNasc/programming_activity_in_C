#include <stdio.h>

int main(){
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    
    int Maior;
    int Menor;
    int Meio;
    if(X >= Y && X >= Z){
        Maior = X;
    }
    else if(Y >= X && Y >= Z){
        Maior = Y;
    }
    else if(Z >= X && Z >= Y){
        Maior = Z;
    }
    if(X <= Y && X <= Z){
        Menor = X;
    }
    else if(Y <= X && Y <= Z){
        Menor = Y;
    }
    else if(Z <= X && Z <= Y){
        Menor = Z;
    }
    Meio = X + Y + Z - Maior - Menor;
    printf("%d %d %d", Menor, Meio, Maior);
    
    return 0;
}
