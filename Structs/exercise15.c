#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Enegia{
    char nome[15];
    float potencia;
    int tempo;
};

struct Enegia ler(void){
    struct Enegia a;
    printf("\n\nDigite o nome: ");
    scanf(" %[^\n]", a.nome);
    printf("\nDigite a potencia: ");
    scanf("%f", &a.potencia);
    printf("\nDigite as horas de uso: ");
    scanf("%d", &a.tempo);
    return a;
}

void Consumo(struct Enegia item[], int n, int dias){
    float consumo[5], consumoT = 0.0, consumoR;
    
    for(int i = 0; i < n; i++){
        consumo[i] = (item[i].potencia * item[i].tempo * dias) / 1000;
        consumoT += consumo[i];
    }
    printf("\nConsumo total: %.2f", consumoT);

    for(int i = 0; i < n; i++){
        consumoR = (consumo[i] / consumoT) * 100;
        printf("\nConsumo relativo do %s é de %.2f%%", item[i].nome, consumoR);
    }
}


int main(){
    struct Enegia vet[5];
    int dias;

    for(int i = 0; i < 5; i++){
        vet[i] = ler();
    }

    printf("\nquantos dias usou?\n");
    scanf("%d", &dias);

    Consumo(vet, 5, dias);

    return 0;
}