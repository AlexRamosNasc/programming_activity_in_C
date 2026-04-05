#include <stdio.h>

int main()
{
    int Mes;
    
    printf("Digite o numero do seu mês considerando que janeiro é o 1.\n");
    scanf("%d", &Mes);
    
    switch(Mes){
        case 1:  printf("\nEste mês tem 31 dias.");       break;
        case 2:  printf("\nEste mês tem 28 ou 29 dias."); break;
        case 3:  printf("\nEste mês tem 31 dias.");       break;
        case 4:  printf("\nEste mês tem 30 dias.");       break;
        case 5:  printf("\nEste mês tem 31 dias.");       break;
        case 6:  printf("\nEste mês tem 30 dias.");       break;
        case 7:  printf("\nEste mês tem 31 dias.");       break;
        case 8:  printf("\nEste mês tem 31 dias.");       break;
        case 9:  printf("\nEste mês tem 30 dias.");       break;
        case 10: printf("\nEste mês tem 31 dias.");       break;
        case 11: printf("\nEste mês tem 30 dias.");       break;
        case 12: printf("\nEste mês tem 31 dias.");       break;
        default: printf("\nmês inválido."); 
    }

    return 0;
}
