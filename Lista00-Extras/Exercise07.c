#include <stdio.h>

int main()
{
    int m[4][5];
    int somaTotal = 0, somaLinha = 0, somaColuna = 0;
    
    printf("Digite os valares da sua matriz da esquerda para direita de cima para baixo\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){ 
            scanf("%d", &m[i][j]);
        }
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){ 
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){ 
            somaTotal += m[i][j];
        }
    }
    
    printf("Soma total = %d\n", somaTotal);
    
    for(int i = 0; i < 4; i++){
        somaLinha = 0;
        for(int j = 0; j < 5; j++){ 
            somaLinha += m[i][j];
        }
        printf("Soma da linha [%d] = %d\n",i + 1, somaLinha);
    }
    
    for(int i = 0; i < 5; i++){
        somaColuna = 0;
        for(int j = 0; j < 4; j++){ 
            somaColuna += m[j][i];
        }
        printf("Soma da coluna [%d] = %d\n",i + 1, somaColuna);
    }
    
    return 0;
}
