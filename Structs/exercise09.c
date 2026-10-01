#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alunos{
    char nome[30];
    int matricula;
    float mediaF;
};

int main(){
    struct Alunos vet[10];
    struct Alunos aprov[10];
    struct Alunos reprov[10];
    int x = 0, y = 0;

    for (int i = 0; i < 10; i++){
        scanf(" %[^\n]", vet[i].nome);
        scanf("%d", &vet[i].matricula);
        scanf("%f", &vet[i].mediaF);   
    }

    for (int i = 0; i < 10; i++){
        if(vet[i].mediaF < 5){
           reprov[y] = vet[i];
           y++;
        }
        else{
            aprov[x] = vet[i];
            x++;
        }
    }

    for (int i = 0; i < x; i++){
        printf("\naprovados\n");
        printf("Nome = %s\n", aprov[i].nome);
        printf("Matricula = %d\n", aprov[i].matricula);
        printf("MediaF = %f\n", aprov[i].mediaF);
    }
    for (int i = 0; i < y; i++){
        printf("\nReprovados\n");
        printf("Nome = %s\n", reprov[i].nome);
        printf("Matricula = %d\n", reprov[i].matricula);
        printf("MediaF = %f\n", reprov[i].mediaF);
    }
    return 0;
}
