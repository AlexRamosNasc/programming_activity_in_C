#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet;
    int n;

    printf("Tamanho do array: ");
    scanf("%d", &n);

    vet = (int *) malloc(n * sizeof(int));

    printf("\nDigite os valores do array[%d] = ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    printf("\narray[%d] = {", n);
    for(int i = 0; i < n; i++){
        printf("%d, ", vet[i]);
    }
    printf("}\n");

    free(vet);
    return 0;
}