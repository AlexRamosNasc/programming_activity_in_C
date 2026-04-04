#include <stdio.h>

int main()
{
    int Num, Ultimo = 1, Penultimo = 0, Novo = 0, Contador = 0;
    
    scanf("%d", &Num);
    
    do{
        printf(" %d", Novo);
        Novo = Ultimo + Penultimo;
        Penultimo = Ultimo;
        Ultimo = Novo;
        Contador++;
    }while(Contador < Num);
    
    return 0;
}
