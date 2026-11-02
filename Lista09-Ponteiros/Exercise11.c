#include<stdio.h>

int main(){
    int vetor[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            printf("Valor = %d, Endereço = %p\n", vetor[i], &vetor[i]);
        }
    }

    return 0;
}