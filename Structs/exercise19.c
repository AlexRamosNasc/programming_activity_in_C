#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Filmes{
    char nome[20];
    int ano;
    int duracao;
};
struct Diretores{
    char nome[20];
    int qntFilme;
    struct Filmes filme[20];
};

struct Filmes ler2(void){
    struct Filmes a;
    scanf(" %[^\n]", a.nome);
    scanf("%d", &a.ano);
    scanf("%d", &a.duracao);

    return a;
}

struct Diretores ler(void){
    struct Diretores a;
    scanf(" %[^\n]", a.nome);
    scanf("%d", &a.qntFilme);
    for(int i = 0; i < a.qntFilme; i++){
        a.filme[i] = ler2();
    }

    return a;
}

void Procura(struct Diretores item[], int n, char *nome){
    for(int i = 0; i < n; i++){
        if(strcmp(item[i].nome, nome) == 0){
            for(int j = 0; j < item[i].qntFilme; j++){
                printf("%s\n", item[i].filme[j].nome);
            }
        }
    }
}

int main(){
    struct Diretores vet[5];
    char nome[20];

    for (int i = 0; i < 5; i++){
        vet[i] = ler();
    }

    getchar();

    while(1){
        printf("Nome do diretor\n");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        if (strlen(nome) == 0) {
            break;
        }   
        printf("\n--- filmes ---\n");
        Procura(vet, 5, nome);
    }
    return 0;
}