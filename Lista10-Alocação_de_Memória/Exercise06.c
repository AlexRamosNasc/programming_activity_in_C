#include <stdio.h>
#include <stdlib.h>

int main(){
    int bytes, valor, quantidade, posição;
    int *p;

    scanf("%d", &bytes);
    if (bytes <= 0 || 4 % bytes != 0 || bytes == 1){
        printf("valor invalido");
        return 0;
    }

    p = (int *) malloc(bytes);

    quantidade = bytes / 4;

    printf("Foram alocados %d bytes, que cabem %d inteiros.\n", bytes, quantidade);

    do{
        printf("\ninserir = 1, consultar = 2, encerrar = 0\n");
        scanf("%d", &valor);

        if(valor == 0){
            return 0;
        }
        else if(valor == 1){
            printf("informe a posição de 0 a %d\n", (quantidade - 1));
            scanf("%d", &posição);
            printf("informe o valor\n");
            scanf("%d", &p[posição]);
        }
        else if(valor == 2){
            printf("informe a posição de 0 a %d\n", (quantidade - 1));
            scanf("%d", &posição);
            
            printf("valor = %d\n", p[posição]);
        }
        else{
            printf("valor invalido\n");
        }

    }while(1);
    free(p);
    return 0;
}