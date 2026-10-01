#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Livros{
    char titulo[30];
    char autor[15];
    int ano;
};

struct Livros ler(void){
    struct Livros p;
    scanf(" %[^\n]", p.titulo);
    scanf(" %[^\n]", p.autor);
    scanf("%d", &p.ano);
    return p;
}

int leitor(struct Livros lista[], int i, char titulo[30]){
    if(strcmp(lista[i].titulo, titulo) == 0){
        return 1;
    }
    return 0;
}

int main(){
    struct Livros vet[5];
    char titulo[30];

    for(int i = 0; i < 5; i++){
        vet[i] = ler();
    }

    printf("qual titulo porcura?\n");
    scanf(" %[^\n]", titulo);

    printf("\nessas sao as opcoes\n");

    for(int i = 0; i < 5; i++){
        if(leitor(vet, i, titulo) != 0){
            printf("%s\n", vet[i].titulo);
            printf("%s\n", vet[i].autor);
            printf("%d\n", vet[i].ano);
            printf("\n");
        }
    }
    return 0;
}