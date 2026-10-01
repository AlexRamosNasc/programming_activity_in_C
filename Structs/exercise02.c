#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
    char nome[30];
    int idade;
    char endereco[100];
};

void Imprimir(char *nome, int idade, char *endereco){
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n ", idade);
    printf("Endereço: %s\n", endereco);
}

int main(){
    struct Pessoa X;

    strcpy(X.nome, "Alex Ramos Do Nascimento") ;
    X.idade = 19;
    strcpy(X.endereco, "Rua almeira, bairo pinto num: 308");
    
    Imprimir(X.nome, X.idade, X.endereco);

    return 0;
}
