#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produtos{
    int codigo;
    char nome[15];
    float preco;
    int quantidade;
};

struct Produtos ler(void){
    struct Produtos a;
    scanf("%d", &a.codigo);
    scanf(" %[^\n]", a.nome);
    scanf("%f", &a.preco);
    scanf("%d", &a.quantidade);
    return a;
}

void Pedido(struct Produtos item[], int n, int C, int Q){
    for(int i = 0; i < n; i++){
        if(item[i].codigo == C){
            if(item[i].quantidade >= Q){
                item[i].quantidade -= Q;
                printf("produto recolhido\n");
            }
            else{
                printf("nao foi possilvel recolher\n");
            }
        }
    }
}

int main(){
    struct Produtos vet[5];
    int codigo, quantidade;

    for(int i = 0; i < 5; i++){
        vet[i] = ler();
    }

    do{
        printf("Seu pedido 'codigo' 'quantidade maior que 0'\n");
        scanf("%d %d", &codigo, &quantidade);

        if(codigo != 0){
            Pedido(vet, 5, codigo, quantidade);
        }

    }while(codigo != 0);


    return 0;
}