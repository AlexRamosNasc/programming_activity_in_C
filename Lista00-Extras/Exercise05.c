#include <stdio.h>

int main()
{
    int preços[15][3];
    
    for(int i = 0; i < 3; i++){
        printf("loja {%d}\n", i + 1);
        for(int j = 0; j < 2; j++){
            printf("digite o preço do produto [%d]\n", j + 1);
            scanf("%d", &preços[j][i]);
        }
    }
    for(int i = 0; i < 2; i++){
        int menor = preços[i][0], loja = 1;
        for(int j = 0; j < 3; j++){
            if(preços[i][j] < menor){
                menor = preços[i][j];
                loja = j + 1;
            }
        }
        printf("A loja [%d] tem o produto [%d] mais barato custando R$%d\n", loja, i + 1, menor);
    }

    return 0;
}
