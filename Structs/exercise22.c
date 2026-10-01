#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// (a) Definição das estruturas encadeadas
struct Endereco {
    char rua[40];
    int numero;
    char complemento[20];
    char bairro[30];
    char cep[12];
    char cidade[30];
    char estado[10];
    char pais[20];
};

struct Telefone {
    int ddd;
    char numero[15];
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Pessoa {
    char nome[40];
    char email[40];
    struct Endereco endereco;
    struct Telefone telefone;
    struct Data aniversario;
    char observacoes[100];
};

// Auxiliar: Lê os dados de uma pessoa do teclado
struct Pessoa lerPessoa(void) {
    struct Pessoa p;
    printf("\n--- Novo Cadastro ---\n");
    printf("Nome completo: ");
    scanf(" %[^\n]", p.nome);
    printf("E-mail: ");
    scanf(" %[^\n]", p.email);

    printf("Telefone (DDD apenas numeros): ");
    scanf("%d", &p.telefone.ddd);
    printf("Telefone (Numero): ");
    scanf(" %[^\n]", p.telefone.numero);

    printf("Aniversario (Dia Mes Ano ex: 15 5 1998): ");
    scanf("%d %d %d", &p.aniversario.dia, &p.aniversario.mes, &p.aniversario.ano);

    printf("Rua: ");
    scanf(" %[^\n]", p.endereco.rua);
    printf("Numero: ");
    scanf("%d", &p.endereco.numero);
    printf("Complemento: ");
    scanf(" %[^\n]", p.endereco.complemento);
    printf("Bairro: ");
    scanf(" %[^\n]", p.endereco.bairro);
    printf("CEP: ");
    scanf(" %[^\n]", p.endereco.cep);
    printf("Cidade: ");
    scanf(" %[^\n]", p.endereco.cidade);
    printf("Estado: ");
    scanf(" %[^\n]", p.endereco.estado);
    printf("Pais: ");
    scanf(" %[^\n]", p.endereco.pais);

    printf("Observacoes: ");
    scanf(" %[^\n]", p.observacoes);

    return p;
}

// Auxiliar: Imprime formato resumido
void imprimirResumido(struct Pessoa p) {
    printf("\nNome: %s\n", p.nome);
    printf("Telefone: (%d) %s\n", p.telefone.ddd, p.telefone.numero);
    printf("E-mail: %s\n", p.email);
}

// Auxiliar: Imprime formato completo
void imprimirCompleto(struct Pessoa p) {
    printf("\n----------------------------------------\n");
    printf("Nome: %s\n", p.nome);
    printf("E-mail: %s\n", p.email);
    printf("Telefone: (%d) %s\n", p.telefone.ddd, p.telefone.numero);
    printf("Aniversario: %02d/%02d/%d\n", p.aniversario.dia, p.aniversario.mes, p.aniversario.ano);
    printf("Endereco: Rua %s, No %d (%s) - Bairro: %s\n", p.endereco.rua, p.endereco.numero, p.endereco.complemento, p.endereco.bairro);
    printf("          CEP: %s - %s/%s - %s\n", p.endereco.cep, p.endereco.cidade, p.endereco.estado, p.endereco.pais);
    printf("Observacoes: %s\n", p.observacoes);
    printf("----------------------------------------\n");
}

// (c) Busca por primeiro nome
void buscarPrimeiroNome(struct Pessoa agenda[], int qtd, char *busca) {
    int achou = 0;
    char primeiroNome[40];

    for (int i = 0; i < qtd; i++) {
        // Extrai apenas a primeira palavra do nome completo cadastrado
        sscanf(agenda[i].nome, "%s", primeiroNome);
        if (strcmp(primeiroNome, busca) == 0) {
            imprimirCompleto(agenda[i]);
            achou = 1;
        }
    }
    if (!achou) {
        printf("\nNenhuma pessoa encontrada com o primeiro nome '%s'.\n", busca);
    }
}

// (d) Busca por mês de aniversário
void buscarPorMes(struct Pessoa agenda[], int qtd, int mes) {
    int achou = 0;
    for (int i = 0; i < qtd; i++) {
        if (agenda[i].aniversario.mes == mes) {
            imprimirCompleto(agenda[i]);
            achou = 1;
        }
    }
    if (!achou) {
        printf("\nNinguem faz aniversario no mes %d.\n", mes);
    }
}

// (e) Busca por dia e mês de aniversário
void buscarPorDiaEMes(struct Pessoa agenda[], int qtd, int dia, int mes) {
    int achou = 0;
    for (int i = 0; i < qtd; i++) {
        if (agenda[i].aniversario.dia == dia && agenda[i].aniversario.mes == mes) {
            imprimirCompleto(agenda[i]);
            achou = 1;
        }
    }
    if (!achou) {
        printf("\nNinguem faz aniversario no dia %02d/%02d.\n", dia, mes);
    }
}

// (f) Insere pessoa mantendo a ordem alfabética por Nome
void inserirPessoa(struct Pessoa agenda[], int *qtd) {
    if (*qtd >= 100) {
        printf("\nAgenda cheia!\n");
        return;
    }

    struct Pessoa nova = lerPessoa();
    int pos = *qtd;

    // Encontra a posição correta em ordem alfabética
    for (int i = 0; i < *qtd; i++) {
        if (strcmp(nova.nome, agenda[i].nome) < 0) {
            pos = i;
            break;
        }
    }

    // Desloca os elementos para a direita
    for (int i = *qtd; i > pos; i--) {
        agenda[i] = agenda[i - 1];
    }

    agenda[pos] = nova;
    (*qtd)++;
    printf("\nPessoa inserida com sucesso em ordem alfabetica!\n");
}

// (g) Retira pessoa pelo nome e desloca os elementos para a esquerda
void retirarPessoa(struct Pessoa agenda[], int *qtd, char *nomeRemover) {
    int pos = -1;

    for (int i = 0; i < *qtd; i++) {
        if (strcmp(agenda[i].nome, nomeRemover) == 0) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("\nPessoa '%s' nao encontrada.\n", nomeRemover);
        return;
    }

    // Desloca os elementos seguintes para cobrir a posição removida
    for (int i = pos; i < *qtd - 1; i++) {
        agenda[i] = agenda[i + 1];
    }

    (*qtd)--;
    printf("\n'%s' foi removido(a) com sucesso.\n", nomeRemover);
}

// (h) Imprime a agenda nas opções 1 (resumido) ou 2 (completo)
void imprimirAgenda(struct Pessoa agenda[], int qtd, int opcao) {
    if (qtd == 0) {
        printf("\nAgenda vazia.\n");
        return;
    }

    for (int i = 0; i < qtd; i++) {
        if (opcao == 1) {
            imprimirResumido(agenda[i]);
        } else {
            imprimirCompleto(agenda[i]);
        }
    }
}

// (i) Menu principal
int main() {
    // (b) Declaração da agenda com capacidade até 100 pessoas
    struct Pessoa agenda[100];
    int qtd = 0;
    int opcao;

    do {
        printf("\n================ MENU AGENDA ================\n");
        printf("1. Inserir pessoa (Ordem Alfabetica)\n");
        printf("2. Retirar pessoa\n");
        printf("3. Buscar por primeiro nome\n");
        printf("4. Buscar por mes de aniversario\n");
        printf("5. Buscar por dia e mes de aniversario\n");
        printf("6. Imprimir agenda (Nome, Telefone e E-mail)\n");
        printf("7. Imprimir agenda (Todos os dados)\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            inserirPessoa(agenda, &qtd);
        } 
        else if (opcao == 2) {
            char nome[40];
            printf("Digite o nome completo exato para retirar: ");
            scanf(" %[^\n]", nome);
            retirarPessoa(agenda, &qtd, nome);
        } 
        else if (opcao == 3) {
            char primeiro[40];
            printf("Digite o primeiro nome: ");
            scanf(" %[^\n]", primeiro);
            buscarPrimeiroNome(agenda, qtd, primeiro);
        } 
        else if (opcao == 4) {
            int mes;
            printf("Digite o mes de aniversario (1-12): ");
            scanf("%d", &mes);
            buscarPorMes(agenda, qtd, mes);
        } 
        else if (opcao == 5) {
            int dia, mes;
            printf("Digite o dia e o mes (ex: 15 5): ");
            scanf("%d %d", &dia, &mes);
            buscarPorDiaEMes(agenda, qtd, dia, mes);
        } 
        else if (opcao == 6) {
            imprimirAgenda(agenda, qtd, 1);
        } 
        else if (opcao == 7) {
            imprimirAgenda(agenda, qtd, 2);
        } 
        else if (opcao == 0) {
            printf("\nEncerrando o programa. Agora vai descansar que o dever ta cumprido!\n");
        } 
        else {
            printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}