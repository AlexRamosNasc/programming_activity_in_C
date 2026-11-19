#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, x;
    printf("\nquantas linhas tera?\n");
    scanf("%d", &a);
    printf("quantas colunas tera?\n\n");
    scanf("%d", &b);

    int (*matriz)[b] = calloc(a, sizeof *matriz);
    if(matriz == NULL){printf("falha na alocacao\n"); return 1;}

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("valor em [%d][%d]\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);
    return 0;
}