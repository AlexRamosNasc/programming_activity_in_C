#include <stdio.h>

int main(){
    int Cand1 = 0, Cand2 = 0, Cand3 = 0, Num;
    float Percentual, Nulo = 0, Branco = 0, Total = 0;
    
    scanf("%d", &Num);
    
    while(Num != 0){
        if(Num == 1){
           Cand1++;
           Total++;
        }
        if(Num == 2){
            Cand2++;
            Total++;
        }
        if(Num == 3){
            Cand3++;
            Total++;
        }
        if(Num == 4){
            Nulo++;
            Total++;
        }
        if(Num == 5){
            Branco++;
            Total++;
        }
        if(Num > 5){
            printf("Voto inválido\n");
        }
        
        scanf("%d", &Num);
    }
    
printf("Votos Candidato 1: %d\nVotos Candidato 2: %d\nVotos Candidato 3: %d\nVotos nulos: %.0f\nVotos em branco: %.0f\n", Cand1, Cand2, Cand3, Nulo, Branco);
    
    if(Cand1 > Cand2 && Cand1 > Cand3){
        printf("Candidato 1 venceu!\n");
    }
    else if(Cand2 > Cand1 && Cand2 > Cand3){
        printf("Candidato 2 venceu!\n");
    }
    else if(Cand3 > Cand1 && Cand3 > Cand2){
        printf("Candidato 3 venceu!\n");
    }
    else if(Cand1 == Cand2 || Cand2 == Cand3 || Cand1 == Cand3){
        printf("Houve empate!\n");
    }
    
Percentual = ((Nulo + Branco) / Total) * 100;

printf("Percentual de votos brancos ou nulos: %.2f%%\n", Percentual);

return 0;
}
