#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int Num, Computador = 0, Player = 0;
    char Continue;
    
    do{
        srand(time(NULL));
        int aleatorio = rand() % 3 +1;
        
        printf("\nDigite um numero entre 1 e 3 para escolher pedra, papel, tesoura respectivamente.\n");
        scanf("%d", &Num);
        
        switch(Num){
            case 1:
                if(aleatorio == 2){
                    printf("\nComputador jogou: Papel\nVocê jogou: Pedra\n\nComputador Ganhou: Papel embrulha Pedra.\n");
                    Computador++;
                }
                else if(aleatorio == 3){
                    printf("\nComputador jogou: Tesoura\nVocê jogou: Pedra\n\nVocê Ganhou: Pedra quebra Tesoura.\n");
                    Player++;
                }
                else{
                    printf("\nComputador jogou: Pedra\nVocê jogou: Pedra\n\nEmpate.\n");
                }
            break;
            
            case 2:
                if(aleatorio == 1){
                    printf("\nComputador jogou: Pedra\nVocê jogou: Papel\n\nVocê Ganhou: Papel embrulha Pedra.\n");
                    Player++;
                }
                else if(aleatorio == 3){
                    printf("\nComputador jogou: Tesoura\nVocê jogou: Papel\n\nComputador Ganhou: Tesoura corta Papel.\n");
                    Computador++;
                }
                else{
                    printf("\nComputador jogou: Papel\nVocê jogou: Papel\n\nEmpate.\n");
                }
            break;
            
            case 3:
                if(aleatorio == 1){
                    printf("\nComputador jogou: Pedra\nVocê jogou: Tesoura\n\nComputador Ganhou: Pedra quebra Tesoura.\n");
                    Computador++;
                }
                else if(aleatorio == 2){
                    printf("\nComputador jogou: Papel\nVocê jogou: Tesoura\n\nVocê Ganhou: Tesoura corta Papel.\n");
                    Player++;
                }
                else{
                    printf("\nComputador jogou: Tesoura\nVocê jogou: Tesoura\n\nEmpate.\n");
                }
            break;
            default: printf("\nValor invalido.\n");
        }
        
        printf("\nVocê deseja continar jogando? S para contiar e N para parar.\n");
        scanf(" %c", &Continue);
        while(Continue != 'S' && Continue != 'N'){
            printf("\nDigite apenas S para continuar ou N para parar.\n");
            scanf(" %c", &Continue);
        }
    }while(Continue == 'S');
    
    if(Computador > Player){
        printf("\nO Computador Ganhou.\n");
    }
    else if(Player > Computador){
        printf("\nVocê Ganhou.\n");
    }
    else{
        printf("\nEmpate\n");
    }
    
    printf("\nVocê fez %d pontos.\n",Player);
    printf("\nO Computador fez %d pontos.\n", Computador);

    return 0;
}
