#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cadastro{
    char nome[30];
    char endereco[50];
    float salario;
    char cpf[12];
    char estatusCivil[15];
    char telefone[15];
    int idade;
    char sexo;
};

struct Cadastro ler(void){
    struct Cadastro a;
    scanf(" %[^\n]", a.nome);
    scanf(" %[^\n]", a.endereco);
    scanf("%f", &a.salario);
    scanf(" %[^\n]", a.cpf);
    scanf(" %[^\n]", a.estatusCivil);
    scanf(" %[^\n]", a.telefone);
    scanf("%d", &a.idade);
    scanf(" %c", &a.sexo);
    return a;
}

void Maior(struct Cadastro pessoa[], int n){
    int maior = 0, x = 0;
    for(int i = 0; i < n; i++){
        if(pessoa[i].idade > maior){
            maior = pessoa[i].idade;
            x = i;
        }
    }
    printf("A pessoa com a maior idade se chama %s e tem %d anos\n", pessoa[x].nome, pessoa[x].idade);
}

void Sexo(struct Cadastro pessoa[], int n){
    for(int i = 0; i < n; i++){
        if(pessoa[i].sexo == 'M'){
            printf("%s\n", pessoa[i].nome);
        }
    }
}

void Salario(struct Cadastro pessoa[], int n){
    for(int i = 0; i < n; i++){
        if(pessoa[i].salario > 1000){
            printf("%s\n", pessoa[i].nome);
        }
    }
}

void Identidade(struct Cadastro pessoa[], int n, char *id){
    for(int i = 0; i < n; i++){
        if(strcmp(pessoa[i].cpf, id) == 0){
            printf("Nome: %s", pessoa[i].nome);
            printf("\nEndereço: %s", pessoa[i].endereco);
            printf("\nSalário: %.2f", pessoa[i].salario);
            printf("\nCPF: %s", pessoa[i].cpf);
            printf("\nEstado Civil: %s", pessoa[i].estatusCivil);
            printf("\nTelefone: %s", pessoa[i].telefone);
            printf("\nIdade: %d", pessoa[i].idade);
            printf("\nSexo: %c", pessoa[i].sexo);
        }
    }
}

int main(){
    struct Cadastro vet[5];
    char identidade[12];

    for (int i = 0; i < 5; i++){
        vet[i] = ler();
    }

    Maior(vet, 5);
    printf("\nPessoas do sexo masculino\n");
    Sexo(vet, 5);
    printf("\nPessoas com salario maior que 1000\n");
    Salario(vet, 5);

    printf("\nQual o numero da identidade?\n");
    scanf(" %[^\n]", identidade);

    Identidade(vet, 5, identidade);

    return 0;
}