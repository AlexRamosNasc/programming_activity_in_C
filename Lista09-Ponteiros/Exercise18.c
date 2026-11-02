#include<stdio.h>

int mudar(int *vet[], int *n){
    int maior = *vet[0];
    for(int i = 1; i < *n; i++){
        if(maior < *vet[i]){
            maior = *vet[i];
        }
    }
    return maior;
}

int main(){
    int n, k, cont = 0;
    scanf("%d", &n);
    
    int vet[n], *Pvet[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
        Pvet[i] = &vet[i];
    }

    scanf("%d", &k);

    for(int i = 0; i < n; i++){
        if(i % k == 0 && i != 0){
            printf("\n");
        }
        printf("%d ", vet[i]);
    }

    printf("\nO maior numero é %d", mudar(Pvet, &n));

    return 0;
}