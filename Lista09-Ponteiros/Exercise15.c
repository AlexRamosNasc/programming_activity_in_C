#include<stdio.h>

void mudar(int *vet[], int n){
    int maior = *vet[0], cont = 0;
    for(int i = 1; i < n; i++){
        if(maior < *vet[i]){
            maior = *vet[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(*vet[i] == maior){
            cont++;
        }
    }
    printf("O maior numero é %d\n", maior);
    printf("Ele se repete %d vezes\n", cont);
}

int main(){
    int N;

    scanf("%d", &N);

    int vet[N];
    int *Pvet[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &vet[i]);
        Pvet[i] = &vet[i];
    }

    mudar(Pvet, N);
    
    return 0;
}