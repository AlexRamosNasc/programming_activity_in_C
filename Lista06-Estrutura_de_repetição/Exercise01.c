#include <stdio.h>

int main(){
    int Num, Par = 0, Impar = 0;
    
    scanf("%d", &Num);
    
    while(Num >= 0){
        if(Num % 2 == 0){
            Par++;
        }
        if(Num % 2 != 0){
            Impar++;
        }
        scanf("%d", &Num);
    }
    
printf("Pares: %d\nImpares: %d\n", Par, Impar);
    
    return 0;
}
