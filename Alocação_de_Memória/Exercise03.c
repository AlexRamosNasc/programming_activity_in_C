#include <stdio.h>
#include <stdlib.h>

struct Lista{
    int anterior;
    int codigo;
    int proximo;
};

int main(){
    struct Lista *Px;
    int tamanho = 1; 
    int opcao, i;

    Px = (struct Lista *) malloc(tamanho * sizeof(struct Lista));

    Px[0].anterior = 0;
    Px[0].codigo = 0;
    Px[0].proximo = 0;

    printf("Digite o codigo: ");
    scanf("%d", &Px[0].codigo);

    while (1) {
        printf("\n1 - Incluir\n2 - Listar\n0 - Sair\nOpcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break;
        }

        if (opcao == 1) {
            Px = realloc(Px, (tamanho + 1) * sizeof(struct Lista));
            tamanho++;

            i = tamanho - 1;

            Px[i].anterior = 0;
            Px[i].codigo = 0;
            Px[i].proximo = 0;

            printf("Digite o codigo: ");
            scanf("%d", &Px[i].codigo);

            Px[i].anterior = Px[i - 1].codigo;
            Px[i - 1].proximo = Px[i].codigo;
        } else if (opcao == 2) {
            printf("\n%-10s %-10s %-10s\n", "anterior", "codigo", "proximo");
            for (i = 0; i < tamanho; i++) {
                printf("%-10d %-10d %-10d\n", Px[i].anterior, Px[i].codigo, Px[i].proximo);
            }
        } else {
            printf("Opcao invalida\n");
        }
    }
    free(Px);
    return 0;
}