#include <stdio.h>
#include <stdlib.h>

void contar(float *vet, int qtd, int *alerta){
    *alerta = 0;
    for(int i = 0; i < qtd; i++){
        if(vet[i] > 35){
            (*alerta)++;
        }
    }

}

void cal_media(float soma, int qtd, float *media){
    if(qtd > 0){
        *media = soma / qtd;
    }else{*media = 0;}
}

void exibir(float media, int alerta){
    printf("\nmedia = %.2f\n", media);
    printf("qtd.alertas = %d\n", alerta);
}

int main(){
    int qtd, alerta = 0;
    float soma = 0, media = 0; 
    
    printf("digite a quantidade de sensores: ");
    scanf("%d", &qtd);

    float *leituras = (float *) malloc(qtd * sizeof(float));
    if(leituras == NULL){printf("\nerro de alocacao\n"); return 1;}

    for(int i = 0; i < qtd; i++){
        printf("\ndigite a temperatura do sensor %d\n", i+1);
        scanf("%f", &leituras[i]);
        soma += leituras[i];
    }

    contar(leituras, qtd, &alerta);
    cal_media(soma, qtd, &media);
    exibir(media, alerta);


    free(leituras);
    return 0;
}

