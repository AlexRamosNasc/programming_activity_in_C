#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet;

    vet = (int *) malloc(5 * sizeof(int));

    printf("Digite os valores do array[5] = ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
    }

    printf("array[5] = {");
    for(int i = 0; i < 5; i++){
        printf("%d, ", vet[i]);
    }
    printf("}\n");

    free(vet);
    return 0;
}