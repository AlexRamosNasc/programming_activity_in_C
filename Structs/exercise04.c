#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alunos{
    char nome[30];
    int matricula;
    float p1;
    float p2;
    float p3;
};

int main(){
    struct Alunos vet[5];
    float maior, media[5]; 
    int x = 0;

    for(int i = 0; i < 5; i++){
        scanf(" %[^\n]", vet[i].nome);
        scanf("%d", &vet[i].matricula);
        scanf("%f", &vet[i].p1);
        scanf("%f", &vet[i].p2);
        scanf("%f", &vet[i].p3);
    }

    maior = vet[0].p1;

    for(int i = 1; i < 5; i++){
       if(vet[i].p1 >= maior){
        maior = vet[i].p1;
        x = i;
       }
    }
    printf("Aluno: %s\nNota: %.1f\n\n", vet[x].nome, vet[x].p1);

    for(int i = 0; i < 5; i++){
       media[i] = (vet[i].p1 + vet[i].p2 + vet[i].p3) / 3;
    }

    maior = media[0];
    x = 0;

    for(int i = 1; i < 5; i++){
       if(media[i] >= maior){
        maior = media[i];
        x = i;
       }
    }
    printf("Aluno: %s\nmedia: %.1f\n\n", vet[x].nome, media[x]);
    
    maior = media[0];
    x = 0;

    for(int i = 1; i < 5; i++){
       if(media[i] <= maior){
        maior = media[i];
        x = i;
       }
    }

    printf("Aluno: %s\nmedia: %.1f\n\n", vet[x].nome, media[x]);

    for(int i = 0; i < 5; i++){
       if(media[i] >= 6){
        printf("Aluno %d esta aprovado com media %.1f\n", i + 1, media[i]);
       }
       else{
        printf("Aluno %d esta reprovado com media %.1f\n", i + 1, media[i]);
       }
    }

    return 0;
}
