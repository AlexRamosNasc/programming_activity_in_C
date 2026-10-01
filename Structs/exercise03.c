#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alunos{
    char nome[30];
    int num_matricula;
    char curso[50];
};

void Imprimir(char *nome, int matricula, char *curso){
    printf("\nNome: %s\n", nome);
    printf("Matricula: %d\n", matricula);
    printf("Curso: %s\n", curso);
}

int main(){
    struct Alunos vet[5];

    for(int i = 0; i < 5; i++){
        scanf(" %[^\n]", &vet[i].nome);
        scanf("%d", &vet[i].num_matricula);
        scanf(" %[^\n]", &vet[i].curso);
    }
    for(int i = 0; i < 5; i++){
        Imprimir(vet[i].nome, vet[i].num_matricula, vet[i].curso);
    }
        

    return 0;
}
