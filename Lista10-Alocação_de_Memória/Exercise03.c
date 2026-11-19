#include <stdio.h>
#include <stdlib.h>

void ler(int *vet, int *n){
    printf("digite os valores\n");
    for(int i = 0; i < *n; i++){
        scanf("%d", &vet[i]);
    }
}

int main(){
    int n, pares = 0, impares = 0;
    int *vet;
    
    printf("digite o tamanho do array\n");
    scanf("%d", &n);

    vet = (int *) malloc (n * sizeof(int));

    ler(vet, &n);
    
    for(int i = 0; i < n; i++){
        if(vet[i] % 2 == 0){
            pares++;
        } else {
            impares++;
        }
    }

    printf("pares = %d\nimpares = %d\n", pares, impares);

    free(vet);
    return 0;
}