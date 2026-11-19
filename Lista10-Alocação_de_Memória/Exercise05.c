#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, soma = 0;
    scanf("%d", &N);
    int *vet;
    vet = (int *) malloc (N * sizeof(int));
    for(int i = 0; i < N; i++){
        scanf("%d", &vet[i]);
    }
    int X;
    scanf("%d", &X);
    printf("multiplos = ");
    for(int i = 0; i < N; i++){
        if(X % vet[i] == 0){
            soma++;
            printf("%d ", vet[i]);
        }
    }    
    printf("\na quantidade de multiplos = %d\n", soma);
    free(vet);
    return 0;
}