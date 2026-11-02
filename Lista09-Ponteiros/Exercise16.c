#include<stdio.h>

int main(){
    int vet[5] = {1, 3, 5, 7, 9};
    int *Pvet[5];
    for(int i = 0; i < 5; i++){
        Pvet[i] = &vet[i];
    }
    
    for(int i = 0; i < 5; i++){
        printf("%d\n", vet[i]);
    }
    
    for(int i = 0; i < 5; i++){
        (*Pvet[i])++;
    }
    
    printf("\n");
    
    for(int i = 0; i < 5; i++){
        printf("%d\n", vet[i]);
    }

    return 0;
}