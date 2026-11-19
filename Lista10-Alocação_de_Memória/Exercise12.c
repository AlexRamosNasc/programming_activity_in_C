#include <stdio.h>
#include <stdlib.h>

struct estoque
{
    int cod;
    char nome[50];
    int quant;
    float preco;
};

int main(){
    int n, maior, cod;
    struct estoque *produto;

    printf("\ninforme a quantidade de produtos:\n");
    scanf("%d", &n);

    produto = (struct estoque *) malloc(n * sizeof(struct estoque));

    for(int i = 0; i < n; i++){
        printf("\nproduto[%d]\n", i+1);
        
        printf("codigo = ");
        scanf("%d", &produto[i].cod);

        printf("\nNome = ");
        scanf(" %[^\n]", produto[i].nome);

        printf("\nquantidade = ");
        scanf("%d", &produto[i].quant);

        printf("\npreco = ");
        scanf("%f", &produto[i].preco);
    }

    maior = produto[0].preco;

    for(int i = 1; i < n; i++){
        if(maior < produto[i].preco){
            maior = produto[i].preco;
            cod = i;
        }
    }

    printf("\n\no produto[%d] e o mais caro\n", cod+1);
        
    printf("codigo = %d\n", produto[cod].cod);

    printf("Nome = %s\n", produto[cod].nome);

    printf("quantidade = %d\n", produto[cod].quant);

    printf("preco = %.2f\n", produto[cod].preco);
    
    maior = produto[0].quant;

    for(int i = 1; i < n; i++){
        if(maior < produto[i].quant){
            maior = produto[i].quant;
            cod = i;
        }
    }

    printf("\no produto[%d] e o com maior estoque\n", cod+1);
        
    printf("codigo = %d\n", produto[cod].cod);

    printf("Nome = %s\n", produto[cod].nome);

    printf("quantidade = %d\n", produto[cod].quant);

    printf("preco = %.2f\n", produto[cod].preco);

    free(produto);
    return 0;
}