#include<stdio.h>

void mudar(int *vet[], int *v, int *min, int *max){
    int *max = *vet[0], *min = *vet[0];
    for(int i = 0; i < *v; i++){
        if(*max < *vet[i]){
            *max = *vet[i];
        }
        if(*min > *vet[i]){
            *min = *vet[i];
        }
    }
}

int main(){
    int v, min = 0, max = 0;
    scanf("%d", &v);

    int vet[v];
    int *Pvet[v];
    for(int i = 0; i < v; i++){
        scanf("%d", &vet[i]);
        Pvet[i] = &vet[i];
    }

    mudar(Pvet, &v, &min, &max);
    
    printf("max = %d, min = %d\n", max, min);

    return 0;
}