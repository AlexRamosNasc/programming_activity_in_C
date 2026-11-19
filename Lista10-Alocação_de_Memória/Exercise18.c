#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, d;

    printf("\ndigite a quantidade de linhas e colunas da matriz A:\n");
    printf("linhas: ");
    scanf("%d", &a);
    printf("\nColunas: ");
    scanf("%d", &b);

    printf("\ndigite a quantidade de linhas e colunas da matriz B:\n");
    printf("linhas: ");
    scanf("%d", &c);
    printf("\nColunas: ");
    scanf("%d", &d);
    printf("\n");

    int (*matrizA)[b] = calloc(a, sizeof *matrizA);
    int (*matrizB)[d] = calloc(c, sizeof *matrizB);

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("matriz A\n");
            printf("valor em [%d][%d]\n", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i < c; i++){
        for(int j = 0; j < d; j++){
            printf("matriz B\n");
            printf("valor em [%d][%d]\n", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }
    if(b == c){
        int matrizP[a][d];

        for(int i = 0; i < a; i++){
            for(int j = 0; j < d; j++){
                matrizP[i][j] = 0;

                for(int k = 0; k < b; k++){
                    matrizP[i][j] += matrizA[i][k] * matrizB[k][j];
                }
            }
        }

        printf("matriz A:\n");
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                printf("%d ", matrizA[i][j]);
            }
            printf("\n");
        }

        printf("\nmatriz B:\n");
        for(int i = 0; i < c; i++){
            for(int j = 0; j < d; j++){
                printf("%d ", matrizB[i][j]);
            }
            printf("\n");
        }

        printf("\nmatriz P:\n");
        for(int i = 0; i < a; i++){
            for(int j = 0; j < d; j++){
                printf("%d ", matrizP[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("matriz A:\n");
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                printf("%d ", matrizA[i][j]);
            }
            printf("\n");
        }

        printf("\nmatriz B:\n");
        for(int i = 0; i < c; i++){
            for(int j = 0; j < d; j++){
                printf("%d ", matrizB[i][j]);
            }
            printf("\n");
        }

        printf("\nnao existe matriz produto entre ela\n");
    }

    free(matrizA); free(matrizB);
    return 0;
}