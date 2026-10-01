#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Empresa{
    char nome[30]; 
    int idade; 
    char sexo; 
    char cpf[12];
    char dt_nascimento[12]; 
    int cod_setor;
    char cargo[30]; 
    float salario;
};

int main(){
    struct Empresa Funcionario;

    scanf(" %[^\n]", Funcionario.nome);
    scanf("%d", &Funcionario.idade);
    do{
        scanf(" %c", &Funcionario.sexo);
        if (Funcionario.sexo != 'M' && Funcionario.sexo != 'F') {
            printf("Entrada inválida! Digite apenas 'M' ou 'F'.\n\n");
        }
    }while (Funcionario.sexo != 'M' && Funcionario.sexo != 'F');
    scanf(" %[^\n]", Funcionario.cpf);
    scanf(" %[^\n]", Funcionario.dt_nascimento);
    do{
        scanf("%d", &Funcionario.cod_setor);
        if (Funcionario.cod_setor < 0 || Funcionario.cod_setor > 99) {
            printf("Entrada inválida! Digite apenas 0-99.\n\n");
        }
    }while (Funcionario.cod_setor < 0 || Funcionario.cod_setor > 99);
    scanf(" %[^\n]", Funcionario.cargo);
    scanf("%f", &Funcionario.salario);

    printf("Nome = %s\nIdade = %d\nSexo = %c\nCPF = %s\nDt_Nascimento = %s\nCod_Setor = %d\nCargo = %s\nSalario = %.2f", 
        Funcionario.nome, 
        Funcionario.idade, 
        Funcionario.sexo, 
        Funcionario.cpf, 
        Funcionario.dt_nascimento, 
        Funcionario.cod_setor, 
        Funcionario.cargo, 
        Funcionario.salario);
    return 0;
}