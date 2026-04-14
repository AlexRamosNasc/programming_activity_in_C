#include <stdio.h>

int main()
{
    int V[30];
    int X;
    
    for(int I = 0; I < 30; I++){
        scanf("%d", &V[I]);
    }
    for(int I = 0; I < 30; I++){
        scanf("%d", &X);
        if(X == V[I]){
            printf("Código %d encontrado na posição %d.\n", X, I + 1);
            return 0;
        }
    }
    printf("Código %d não encontrado no cadastro.", X);
    
    return 0;
}
