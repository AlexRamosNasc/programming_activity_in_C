#include <stdio.h>

int main(){ 
    int  Dia, Ano, Mes, Numero_de_dias_29_de_fevereiro, Anos_passados, Total; 

    printf("Digite o ano do seu nascimento.\n"); 
    scanf("%d", &Ano); 

    Anos_passados = Ano - 1900; 
    Numero_de_dias_29_de_fevereiro = Anos_passados / 4; 

    printf("\nDigite o dia do seu nascimento.\n"); 
    scanf("%d", &Dia); 

    printf("\nObtenha o número associado ao mês do seu nascimento, a partir do quadro a seguir: janeiro 0, fevereiro 3, março 3, abril 6, maio 1, junho 4, julho 6, agosto 2, setembro 5, outubro 0, novembro 3, dezembro 5.\n"); 
    scanf("%d", &Mes); 
    
    Total = (Anos_passados + Numero_de_dias_29_de_fevereiro + Dia + Mes) % 7; 

    switch(Total){ 
        
        case 0: printf("\nVocê nasceu em um Domingo.");         break; 
        case 1: printf("\nVocê nasceu em uma Segunda-feira.");  break; 
        case 2: printf("\nVocê nasceu em uma Terça-feira.");    break; 
        case 3: printf("\nVocê nasceu em uma Quarta-feira.");   break; 
        case 4: printf("\nVocê nasceu em uma Quinta-feira.");   break;
        case 5: printf("\nVocê nasceu em uma Sexta-feira.");    break;
        case 6: printf("\nVocê nasceu em um Sábado.");          break; 
        default: printf("\nAlgum numero foi digitado errado.");
    }
    
    return 0; 
}
