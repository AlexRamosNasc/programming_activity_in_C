#include <stdio.h>
#include <stdlib.h>

void fun(int vet[], int n){
    for(int i = 1; i < n; i++){
        vet[i] = vet[i - 1] + 2;
    }
    for(int i = 0; i < n; i++){
        printf("%d, ", vet[i]);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int *vet;
    vet = (int *) malloc(n * sizeof(int));

    scanf("%d", &vet[0]);

    fun(vet, n);

    free(vet);
    return 0;
}