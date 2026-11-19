#include <stdio.h>
#include <stdlib.h>

struct registro
{
    int matricula;
    char sobrenome[30];
    int ano_nasc;
};

int main(){
    int n;
    struct registro *aluno;
    printf("\nquantos alunos serão armazenados?\n");
    scanf("%d", &n);
    
    aluno = (struct registro *) malloc(n * sizeof(struct registro));

    for(int i = 0; i < n; i++){
        printf("\nregistre o aluno[%d]\n", i+1);

        printf("matricula = ");
        scanf("%d", &aluno[i].matricula);

        printf("\nsobrenome = ");
        scanf(" %[^\n]", aluno[i].sobrenome);

        printf("\nano de nascimento = ");
        scanf("%d", &aluno[i].ano_nasc);
    }
    
    for(int i = 0; i < n; i++){
        printf("\naluno[%d]\n", i+1);

        printf("matricula = %d\n", aluno[i].matricula);

        printf("sobrenome = %s\n", aluno[i].sobrenome);

        printf("ano de nascimento = %d\n", aluno[i].ano_nasc);
    }

    free(aluno);
    return 0;
}