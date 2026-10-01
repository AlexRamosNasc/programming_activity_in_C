#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Carros{
    char marca[15];
    int ano;
    float preco;
};

struct Carros ler(void){
    struct Carros p;

    scanf(" %[^\n]", p.marca);
    scanf("%d", &p.ano);
    scanf("%f", &p.preco);

    return p;
}

void indice (struct Carros lista[], int n, float P){
    for(int i = 0; i < n; i++){
        if(lista[i].preco < P){
            printf("Marca: %s\n", lista[i].marca);
            printf("Ano: %d\n", lista[i].ano);
            printf("Preço: %.2f", lista[i].preco);
        }
    }
}

int main(){
    struct Carros vet[5];
    float P;

    for(int i = 0; i < 5; i++){
        vet[i] = ler();
    }

    do{
        printf("Digite o valor de P se quer encerrar digite 0\n");
        scanf("%f", &P);

        if(P != 0){
            indice(vet, 5, P);
        }

    }while(P != 0);
    return 0;
}