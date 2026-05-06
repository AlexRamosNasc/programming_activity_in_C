#include <stdio.h>

int main()
{
    int provas[20][3 + 1];
    
    for(int i = 0; i < 20; i++){
        printf("digite as notas de cada prova para o aluno [%d]\n", i + 1);
        for(int j = 0; j < 3; j++){
            scanf("%d", &provas[i][j]);
        }
    }
    for(int i = 0; i < 20; i++){
        int soma = 0, media;
        for(int j = 0; j < 3; j++){
            soma += provas[i][j];
            media = soma / 3;
            provas[i][3] = media;
        }
    }
    for(int i = 0; i < 20; i++){
        printf("Aluno [%d] -->  ", i + 1);
        for(int j = 0; j < 3; j++){
            printf("%d ", provas[i][j]);
        }
        printf(" Media --> %d", provas[i][3]);
        printf("\n");
    }

    return 0;
}
