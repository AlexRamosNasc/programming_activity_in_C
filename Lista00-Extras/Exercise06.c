#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int Num;
    
    srand(time(NULL));
    int aleatorio = rand() % 3 +1;
    
    printf("Digite um numero entre 1 e 3 para escolher pedra, papel, tesoura respectivamente.\n");
    scanf("%d", &Num);
    
    switch(Num){
        case 1:
            if(aleatorio == 2){
                printf("\nComputador jogou: Papel\nVocê jogou: Pedra\n\nComputador Ganhou: Papel embrulha Pedra.");
            }
            else if(aleatorio == 3){
                printf("\nComputador jogou: Tesoura\nVocê jogou: Pedra\n\nVocê Ganhou: Pedra quebra Tesoura.");
            }
            else{
                printf("\nComputador jogou: Pedra\nVocê jogou: Pedra\n\nEmpate.");
            }
        break;
        
        case 2:
            if(aleatorio == 1){
                printf("\nComputador jogou: Pedra\nVocê jogou: Papel\n\nVocê Ganhou: Papel embrulha Pedra.");
            }
            else if(aleatorio == 3){
                printf("\nComputador jogou: Tesoura\nVocê jogou: Papel\n\nComputador Ganhou: Tesoura corta Papel.");
            }
            else{
                printf("\nComputador jogou: Papel\nVocê jogou: Papel\n\nEmpate.");
            }
        break;
        
        case 3:
            if(aleatorio == 1){
                printf("\nComputador jogou: Pedra\nVocê jogou: Tesoura\n\nComputador Ganhou: Pedra quebra Tesoura.");
            }
            else if(aleatorio == 2){
                printf("\nComputador jogou: Papel\nVocê jogou: Tesoura\n\nVocê Ganhou: Tesoura corta Papel.");
            }
            else{
                printf("\nComputador jogou: Tesoura\nVocê jogou: Tesoura\n\nEmpate.");
            }
        break;
        default: printf("\nValor invalido.");
    }


    return 0;
}
