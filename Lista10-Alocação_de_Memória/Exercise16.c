#include <stdio.h>
#include <stdlib.h>

struct registros
{
    char nome[31];
    int cod;
    float valor;
};


int main(){
    char *vet;
    struct registros *registro;

    vet = (char *) malloc(1024);
    int (*matriz)[10] = malloc(10 * sizeof *matriz);
    registro = (struct registros *) malloc(50 * sizeof(struct registros));
    char (*txt)[81] = malloc(100 * sizeof(*txt));

    free(vet); free(matriz); free(registro); free(txt); 
    return 0;
}