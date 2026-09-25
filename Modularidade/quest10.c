#include <stdio.h>
#include <stdlib.h>

int Maior(int x, int y){
    if(x >= y) {
        return x;
    }
    else{
        return y;
    }
}

int main(){
    int num, vet[10], temp;

    printf("digite 10 numeros inteiros.\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }

    printf("Quer ordenar em crescente(1) ou decrescente(2)\n");
    scanf("%d", &num);
    
    if(num == 1){
        for(int i = 0; i < 10; i++){
            for(int y = 1; y < 10; y++){
                if(Maior(vet[y - 1], vet[y]) == vet[y - 1]){
                    temp = vet[y - 1];
                    vet[y - 1] = vet[y];
                    vet[y] = temp;   
                }
            }
        }
        for(int i = 0; i < 10; i++){
            printf("%d, ", vet[i]);
        }
    }
    else if(num == 2){
        for(int i = 0; i < 10; i++){
            for(int y = 1; y < 10; y++){
                if(Maior(vet[y - 1], vet[y]) != vet[y - 1]){
                    temp = vet[y - 1];
                    vet[y - 1] = vet[y];
                    vet[y] = temp;   
                }
            }
        }
        for(int i = 0; i < 10; i++){
            printf("%d, ", vet[i]);
        }
    }
    else{
        printf("numero invalido");
    }
    return 0;
}
