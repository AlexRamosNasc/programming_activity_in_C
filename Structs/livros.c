#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livros{
    char titulo[30]; 
    char autor[15];
    int ano;
    char genero[30];
}vet[5];

struct genero{
    char descricao[30];
}vetG[100];

void cadastro(int i){

    printf("Digite o titulo %d\n", i + 1);
    scanf(" %[^\n]", vet[i].titulo);

    printf("Digite o autor %d\n", i + 1);
    scanf(" %[^\n]", vet[i].autor);

    printf("Digite o ano %d\n", i + 1);
    scanf("%d", &vet[i].ano);

    printf("Digite o genero %d\n", i + 1);
    scanf(" %[^\n]", vet[i].genero);
    printf("\n");
}

int leitor(int i, char titulo[30]){

    if(strcmp(vet[i].titulo, titulo) == 0){
        return 1;
    }

    return 0;
}

void Cadgenero(int x){

    printf("%d nome do genero\n", x + 1);
    scanf(" %[^\n]", vetG[x].descricao);
}

int leiGen(int i, char genero[30]){

    if(strcmp(vet[i].genero, genero) == 0){
        return 1;
    }

    return 0;
}

int main(){
    int num, contador, x = 0;
    char titulo[30], genero[30];

    do{
        printf("digite 1 para cadastrar um livro, 2 para pesquisar um livro por titulo, 3 para pesquisar um livro por genero, 4 pra criar um gênero e 5 para encerrar.\n");
        scanf("%d", &num);

        switch(num){
            case 1:
                    printf("qual livro quer cadastrar? digite de 0 a 4");
                    scanf("%d", &contador);
                    
                    if (contador >= 0 && contador <= 4){
                        cadastro(contador);
                    }
                    else{
                    printf("valor invalido");
                }

                for(int i = 0; i < 5; i++){
                    printf("%s\n", vet[i].titulo);
                    printf("%s\n", vet[i].autor);
                    printf("%d\n", vet[i].ano);
                    printf("%s\n", vet[i].genero); 
                    printf("\n");
                }
            break;

            case 2:
                printf("qual o titulo do livro?\n");
                scanf(" %[^\n]", titulo);

                printf("\nessas sao as opcoes\n");

                for(int i = 0; i < 5; i++){
                    if(leitor(i, titulo) != 0){
                        printf("%s\n", vet[i].titulo);
                        printf("%s\n", vet[i].autor);
                        printf("%d\n", vet[i].ano);
                        printf("%s\n", vet[i].genero);
                        printf("\n");
                    }
                }
            break;
                
            case 3:
                printf("qual o genero?\n");
                scanf(" %[^\n]", genero);

                printf("\nessas sao as opcoes\n");
                
                x = 0;

                for(int i = 0; i < 100; i++){
                    if(strcmp(vetG[i].descricao, genero) == 0){
                        x = 1;
                        break;
                    }
                }
                if(x == 1){
                    for(int i = 0; i < 5; i++){
                        if(leiGen(i, genero) != 0){
                            printf("%s\n", vet[i].titulo);
                            printf("%s\n", vet[i].autor);
                            printf("%d\n", vet[i].ano);
                            printf("%s\n", vet[i].genero);
                            printf("\n");
                        }
                    }
                }
            break;

            case 4: 
                printf("quantos generos quer fazer? digite de 0 a 99");
                scanf("%d", &contador);
                
                if (contador >= 0 && contador <= 99){
                    for(int i = 0; i < contador; i++){
                        Cadgenero(i);
                    }
                }
                else{
                    printf("valor invalido");
                }
            break;
            
            case 5: break;
            default: printf("numero invalido\n"); break;
        }
    }while(num != 5);
    
    return 0;
}