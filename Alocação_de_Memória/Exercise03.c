#include <stdio.h>
#include <stdlib.h>

struct Lista{
    int anterior;
    int codigo;
    int próximo;
};

int main(){
    int x, tamanho = 0;
    struct Lista *pont;

    struct Lista *pont anterior;

    printf("digite 1 para incluir e 0 para listar\n");
    scanf("%d", &x);



    if(x){
        tamanho++;

    }else{

    }

    return 0;
}