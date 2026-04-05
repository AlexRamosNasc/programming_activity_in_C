#include <stdio.h>

int main()
{
    int  Candidato_A = 0, Candidato_B = 0, Candidato_C = 0, Num;
    float Porcentagem_de_voto_branco, Porcentagem_de_voto_nulo, Voto_nulo = 0, Voto_branco = 0, Total;
    
    printf("Digite um valor para selecionar seu voto 1– Candidato A, 2– Candidato B, 3 Candidato C, 4– Voto nulo, 5– Voto branco, 6– Encerrar a urna.\n");
    
    do{
        scanf("%d", &Num);
        switch(Num){
        case 1:Candidato_A++; break;
        case 2:Candidato_B++; break;
        case 3:Candidato_C++; break;
        case 4:Voto_nulo++;   break;
        case 5:Voto_branco++; break;
        default:printf("\nValor invalido tente novamente\n\n");
        }
    }while(Num != 6);

    Total = Candidato_A + Candidato_B + Candidato_C + Voto_nulo + Voto_branco;
    printf("\ntotal de votos da eleição %d\n", Total);
    
    printf("\nCandidato_A teve %d votos\n", Candidato_A);
    printf("\nCandidato_B teve %d votos\n", Candidato_B);
    printf("\nCandidato_C teve %d votos\n", Candidato_C);
    
        if(Candidato_A > Candidato_B && Candidato_A > Candidato_C){
            printf("\nCandidato A é o vencedor\n");
        }
        else if(Candidato_B > Candidato_A && Candidato_B > Candidato_C){
            printf("\nCandidato B é o vencedor\n");
        }
        else if(Candidato_C > Candidato_A && Candidato_C > Candidato_B){
            printf("\nCandidato C é o vencedor\n");
        }
        else if(Candidato_A > Candidato_B && Candidato_A == Candidato_C){
            printf("\nouve empate entre o Candidato A e o Candidato C\n");
        }
        else if(Candidato_A == Candidato_B && Candidato_A > Candidato_C){
            printf("\nouve empate entre o Candidato A e o Candidato B\n");
        }
        else if(Candidato_A < Candidato_B && Candidato_B == Candidato_C){
            printf("\nouve empate entre o Candidato B e o Candidato C\n");
        }
    
    Porcentagem_de_voto_branco = (Voto_branco / Total) * 100;
    printf("\nA porcentagem de votos em branco é %.2f%%\n", Porcentagem_de_voto_branco);
    
    Porcentagem_de_voto_nulo = (Voto_nulo / Total) * 100;
    printf("\nA porcentagem de votos nulo é %.2f%%\n", Porcentagem_de_voto_nulo);
    
    return 0;
}
