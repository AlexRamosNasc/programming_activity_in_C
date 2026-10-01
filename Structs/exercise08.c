#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoas{
    char nome[30];
    char endereco[50];
    char telefone[15];
};

int main(){
    struct Pessoas vet[5];
    struct Pessoas temp;

    for(int i = 0; i < 5; i++){
        scanf(" %[^\n]", vet[i].nome);
        scanf(" %[^\n]", vet[i].endereco);
        scanf(" %[^\n]", vet[i].telefone);
    }
    for(int i = 0; i < 5 - 1; i++){
        for(int j = 0; j < 5 - i - 1; j++){
            if(strcmp(vet[j].nome, vet[j + 1].nome) > 0){
                temp = vet[j + 1];
                vet[j + 1] = vet[j];
                vet[j] = temp;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        printf("\nNome = %s\n", vet[i].nome);
        printf("Endereco = %s\n", vet[i].endereco);
        printf("Telefone = %s\n", vet[i].telefone);
    }

}
