#include <stdio.h>
#include <stdlib.h>

int main(){
    int *num, capacidade = 1, x = 0;
    num = (int *) malloc(capacidade * sizeof(int));
    while(1){
        printf("\nescolha um valor inteiro (valor negativo para sair): ");
        scanf("%d", &num[x]);

        if(num[x] < 0){
            break;
        }

        capacidade++;
        int *temp = realloc(num, capacidade * sizeof(int));
        if(temp == NULL){
            printf("\nFalha no realloc\n");
            free(num);
            return 1;
        }
        num = temp;

        x++;
    }

    printf("\nvoce digitou: ");
    for(int i = 0; i < x; i ++){
        printf("%d, ", num[i]);
    }
    printf("\n");

    free(num);
    return 0;
}