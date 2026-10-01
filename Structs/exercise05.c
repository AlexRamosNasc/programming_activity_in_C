#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alunos{
    char nome[30];
    int matricula;
    int cd_disciplina;
    float n1;
    float n2;
};

int main(){
    struct Alunos vet[10];
    float media[10];

    for(int i = 0; i < 10; i++){
        scanf(" %[^\n]", vet[i].nome);
        scanf("%d", &vet[i].matricula);
        scanf("%d", &vet[i].cd_disciplina);
        scanf("%f", &vet[i].n1);
        scanf("%f", &vet[i].n2);
    }

    for(int i = 0; i < 10; i++){
       media[i] = (vet[i].n1 + (vet[i].n2 * 2)) / 3;
       printf("Aluno: %s\nmedia: %.1f\n\n", vet[x].nome, media[x]);
    }

    return 0;
}