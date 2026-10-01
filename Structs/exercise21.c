#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dma {
     int dia;
     int mes;
     int ano;
};

struct dma ler(void){
    struct dma a;
    scanf("%d", &a.dia);
    scanf("%d", &a.mes);
    scanf("%d", &a.ano);
    return a;
}

int validarData(struct dma data){
    
    if (data.ano < 1900 || data.ano > 2026) {
        return 0;
    }

    if (data.mes < 1 || data.mes > 12) {
        return 0;
    }

    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((data.ano % 4 == 0 && data.ano % 100 != 0) || (data.ano % 400 == 0)) {
        diasPorMes[2] = 29;
    }

    if (data.dia < 1 || data.dia > diasPorMes[data.mes]) {
        return 0;
    }

    return 1;
}

long int dataParaDias(struct dma d) {
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int a = d.ano - 1;
    long int total = (long int)a * 365 + d.dia;
    total += (a / 4) - (a / 100) + (a / 400);
    if ((d.ano % 4 == 0 && d.ano % 100 != 0) || (d.ano % 400 == 0)) {
        diasPorMes[2] = 29;
    }
    for (int i = 1; i < d.mes; i++) {
        total += diasPorMes[i];
    }
    return total;
}

void Diferenca(struct dma data[]){
    
    long int dias1 = dataParaDias(data[0]);
    long int dias2 = dataParaDias(data[1]);
    long int diferenca = dias1 - dias2;
    if (diferenca < 0) diferenca = -diferenca;

    printf("A diferença de dias entre as duas datas é %ld", diferenca);

}

int main(){
    struct dma vet[2];
    int x = 0;

    do{
        printf("Digite a primeira data (dia mes ano):\n");
        vet[0] = ler();

        printf("Digite a segunda data (dia mes ano):\n");
        vet[1] = ler();

        if (validarData(vet[0]) && validarData(vet[1])) {
            x = 1;
        } else {
            printf("\nUma ou ambas as datas sao invalidas! Tente novamente.\n\n");
        }
    }while(x == 0);

    Diferenca(vet);

    return 0;
}