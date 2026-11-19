#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio(double *vet, int n){
    for(int i = 0; i < n; i++){
        vet[i] = ((double)rand() / RAND_MAX) * 100.0;
    }

    printf("os 10 primeiros valores são: ");
    for(int i = 0; i < 10; i++){
        printf("%lf, ", vet[i]);
    }
    printf("\n");
}

int main(){
    int n;
    double *vet;
    srand(time(NULL));

    printf("\nquantos valores dezeja guardar?\n");
    scanf("%d", &n);
    if(n < 10){
        printf("o vetor precisa ser maior ou igual a 10\n");
        return 1;
    }

    vet = (double *) malloc(n * sizeof(double));

    aleatorio(vet, n);

    free(vet);
    return 0;
}