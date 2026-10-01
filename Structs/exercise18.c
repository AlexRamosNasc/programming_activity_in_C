#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ingredientes{
    char nome[25];
    int quantidade;
};
struct Receitas{
    char nome[25];
    int quantidade;
    int numIngredientes;
    struct Ingredientes ingredientes[10];
};

struct Ingredientes ler2(void){
    struct Ingredientes a;
    scanf(" %[^\n]", a.nome);
    scanf("%d", &a.quantidade);
    return a;
}
struct Receitas ler(void){
    struct Receitas a;
    scanf(" %[^\n]", a.nome);
    scanf("%d", &a.quantidade);
    scanf("%d", &a.numIngredientes);
    for(int i = 0; i < a.numIngredientes; i++){
        a.ingredientes[i] = ler2();
    }
    return a;
}

void Procura(struct Receitas item[], int n, char *nome){
    int x = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(item[i].nome, nome) == 0){
            for(int j = 0; j < item[i].numIngredientes; j++){
                printf("%s: %d\n", item[i].ingredientes[j].nome, item[i].ingredientes[j].quantidade);
            }
            x = 1;
        }
    }
    if(x == 0){
        printf("essa receita nao existe");
    }
}

int main(){
    struct Receitas vetR[5];
    char nome[25];

    for (int i = 0; i < 5; i++){
        vetR[i] = ler();
    }

    getchar();

    while(1){
        printf("qual nome da receita? (ENTER pra encerrar)\n");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        if (strlen(nome) == 0) {
            break;
        }
        Procura(vetR, 5, nome);
    }
    
    return 0;
}