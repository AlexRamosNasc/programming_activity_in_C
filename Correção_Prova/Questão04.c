#include <stdio.h>

int main(){
    int instituicao, x = 0;
    float salario, Porcentagem_De_Concluçao_Superior, media_Salarial_De_Ensino_Inconcluido = 0, salario_Inconcluido = 0, salario_Concluido[100], maior_Salario, publica = 0, particular = 0, inconcluido = 0, numero_De_Pessoas;
    
    printf("Digite o numero De Pessoas da pesquisa:\n");
    scanf("%f", &numero_De_Pessoas);
    
    for(int i = 0; i < numero_De_Pessoas; i++){
    
        printf("Digite 1 se concluiu o ensino superior em isntuição publica, 2 se foi em isntuição particular ou 3 se nao concluiu o ensino superior:\n");
        scanf("%d", &instituicao);
        
        switch(instituicao){
            case 1: publica++; break;
            case 2: particular++; break;
            case 3: inconcluido++; break;
        }
        
        if(instituicao == 3){
            printf("Digite o salario:\n");
            scanf("%f", &salario);
            while(salario < 0){
                printf("Salario invalido!");
                scanf("%f", &salario);
            }
            salario_Inconcluido += salario;
        }
        else{
            printf("Digite o salario:\n");
            scanf("%f", &salario);
            while(salario < 0){
                printf("Salario invalido!");
                scanf("%f", &salario);
            }
            salario_Concluido[x] = salario;
            x++;
        }
    }
    
    Porcentagem_De_Concluçao_Superior = ((publica + particular) / numero_De_Pessoas) * 100;
    
    if(inconcluido > 0){
        media_Salarial_De_Ensino_Inconcluido = salario_Inconcluido / inconcluido;
    }
    
    if(x > 0){
        maior_Salario = salario_Concluido[0];
        
        for(int i = 0; i < x; i++){
            if(salario_Concluido[i] > maior_Salario){
                maior_Salario = salario_Concluido[i];
            }
        }
    }
    
    printf("total de pessoas que estudaram em isntuição publica = %.0f\n", publica);
    printf("total de pessoas que estudaram em isntuição particular = %.0f\n", particular);
    printf("total de pessoas que não concluiram o ensino superior = %.0f\n", inconcluido);
    printf("Porcentagem de pessoas que concluiram o ensino superior = %.2f%%\n", Porcentagem_De_Concluçao_Superior);
    printf("A media Salarial De quem tem o Ensino Inconcluido é de %.2f", media_Salarial_De_Ensino_Inconcluido);
    printf("O maior salario de quem concluio o ensino superior é %.2f", maior_Salario);
}
