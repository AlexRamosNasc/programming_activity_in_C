#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int Num, Tentativas = 0;
    
    srand(time(NULL));
    int Aleatorio = rand() % 100;
    
    printf("Tente adivinhar o numero de 0 a 99 que o computador esta pensando.\n");
    
    do{
        scanf("%d", &Num);
        
        if(Num > Aleatorio){
            printf("\nSeu número é maior do que o meu.\n");
        }
        else if(Num < Aleatorio){
            printf("\nSeu número é menor do que o meu.\n");
        }
        else{
            printf("\nvocê é bom nisso parabéns.\n");
        }
        
        Tentativas++;
    }while(Num != Aleatorio);
    
    printf("\nO numero era %d\n.", Aleatorio);
    printf("\nvocê tentou %d vezes.\n", Tentativas);

    return 0;
}
