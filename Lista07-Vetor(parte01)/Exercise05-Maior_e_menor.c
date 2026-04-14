#include <stdio.h>

int main(){
    int X, Tamanho = 0, Maior, Menor;
    
    scanf("%d", &Tamanho);
    
    int V[Tamanho];
    
    for(int I = 0; I < Tamanho; I++){
        scanf("%d", &V[I]);
    }
    
    Maior = V[0];
    Menor = V[0];
        
    for(int I = 0; I < Tamanho; I++){
        if(V[I] > Maior){
            Maior = V[I];
        }
        else if(V[I] < Menor){
            Menor = V[I];
        }
    }
    printf("Maior: %d\nMenor: %d\n", Maior, Menor);
    
    return 0;
}
