#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exibir(int *vet, int *numeros, int cont){
    printf("numeros sorteados:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d, ", numeros[i]);
    }
    printf("\n");

    if(cont == 0){
        printf("voce errou todo!\n");
    }else{
        printf("numeros corretos:\n");
        for (int i = 0; i < cont; i++) {
            printf("%d, ", vet[i]);
        }
        printf("\n");
    }
}

int main(){
    int numeros[6], escolha[6];
    int repetido, novo, cont = 0;
    int *vet;
    srand(time(NULL));

    for (int i = 0; i < 6; i++) {
        do{
            repetido = 0;
            novo = (rand() % 60) + 1;

            for (int j = 0; j < i; j++) {
                if (numeros[j] == novo) {
                    repetido = 1;
                    break;
                }
            }

        }while(repetido);

        numeros[i] = novo;
    }

    printf("escolha 6 numeros\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &escolha[i]);
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if(escolha[i] == numeros[j]){
                cont++;
                vet = (int *) malloc(cont * sizeof(int));
                vet[i] = escolha[i];
                break;
            }
        }
    }

    exibir(vet, numeros, cont);
    
    free(vet);
    return 0;
}