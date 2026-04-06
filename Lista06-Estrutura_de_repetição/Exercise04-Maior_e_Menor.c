#include <stdio.h>

int main()
{
    int Num, Maior, Menor;
    
    scanf("%d", &Num);
    
    Maior = Num;
    Menor = Num;
    
    while(Num != 0){
        
        if(Maior < Num){
            Maior = Num;
        }
        if(Menor > Num){
            Menor = Num;
        }
        
        scanf("%d", &Num);
    }
    
    printf("Maior: %d\n", Maior);
    printf("Menor: %d", Menor);
    
    return 0;
}
