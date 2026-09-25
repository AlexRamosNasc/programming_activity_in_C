#include <stdio.h>
#include <stdlib.h>

int calcular(int ano_nasc){
    int ano = ano_nasc, dias = 0;

    while (ano != 2026){
        if(ano % 4 == 0 && ano % 100 != 0){
            dias += 366;
        }
        else if(ano % 4 == 0 && ano % 100 == 0 && ano & 400 == 0){
            dias += 366;
        }
        else{
            dias += 365;
        }
        ano++;
    }
    return dias;
}

int main(){
    char nome[30];
    int ano_nasc, ano_atual;

    printf("Qual seu primeiro nome? \n");
    scanf("%29s", nome);

    printf("Quando voce nasceu? \n");
    scanf("%d", &ano_nasc);

    printf("%s voce esta esta vivo a %d dias!\n", nome, calcular(ano_nasc));

    return 0;
}
