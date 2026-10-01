#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produtos{
    int codigo;
    char nome[30];
    float preco;
};

struct Produtos ler(void){
    struct Produtos p;

    printf("\nCodigo: ");
    scanf("%d", &p.codigo);

    printf("Nome: ");
    scanf(" %[^\n]", p.nome);

    printf("Preco: ");
    scanf("%f", &p.preco);

    return p;
};

void exibir (struct Produtos p){
    printf("\n%d - %s - R$ %.2f\n", p.codigo, p.nome, p.preco);
};

int indiceMaisCara (struct Produtos lista[], int n){
    int maior = 0;
    for(int i = 0; i < n; i++){
        if(lista[i].preco > lista[maior].preco){
            maior = i;
        }
    }
    return maior;
};

int main(){
    struct Produtos vet[4];
    
    printf("--- Cadastro ---");
    for(int i = 0; i < 4; i++){
        vet[i] = ler();
    }

    printf("\n--- Produtos cadastrados ---");
    for(int i = 0; i < 4; i++){
        exibir(vet[i]);
    }

    printf("\nProduto mais caro:\n");
    printf("%d - %s - R$ %.2f", vet[indiceMaisCara(vet, 4)].codigo, vet[indiceMaisCara(vet, 4)].nome, vet[indiceMaisCara(vet, 4)].preco);

    return 0;
}
