#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void alocar(char **vet, int n){
    *vet = (char *) malloc((n + 1) * sizeof(char));

    printf("Escreva o conteudo:\n");
    scanf(" %[^\n]", *vet);
}

int main(){
    int n;
    char *vet;
    printf("digite o tamanho da array:\n");
    scanf("%d", &n);

    alocar(&vet, n);

    int len = strlen(vet);
    for(int i = 0; i < len; i++){
        if(vet[i] == 'a' || vet[i] == 'A' || vet[i] == 'e' || vet[i] == 'E' || 
           vet[i] == 'i' || vet[i] == 'I' || vet[i] == 'o' || vet[i] == 'O' || 
           vet[i] == 'u' || vet[i] == 'U'){
           continue;
        }
        printf(" %c", vet[i]);
    }    

    free(vet);
    return 0;
}