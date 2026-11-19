#include <stdio.h>
#include <stdlib.h>

int fun(int x, int a, int b, int matriz[a][b]){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if(x == matriz[i][j]){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int a, b, x;
    printf("\nquantas linhas tera?\n");
    scanf("%d", &a);
    printf("quantas colunas tera?\n\n");
    scanf("%d", &b);

    int (*matriz)[b] = calloc(a, sizeof *matriz);
    if(matriz == NULL){printf("\nalocacao falhou\n"); return 1;}

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("valor em [%d][%d]\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nescolha o valor\n");
    scanf("%d", &x);

    if(fun(x, a, b, matriz)){
        printf("esse valor esta na matriz!\n");
    }else{printf("este valor nao esta na matriz!\n");}

    free(matriz);
    return 0;
}