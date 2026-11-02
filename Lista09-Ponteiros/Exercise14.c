#include<stdio.h>

void mudar(int *vet[], int *x, int *y){
    while(*y > 0){
        (*y)--;        
        *vet[*y] = *x;
    }
}

int main(){
    int x = 9, y = 5, temp = y;
    int vet[y];
    int *pVet[y];

    for(int i = 0; i < y; i++){
        pVet[i] = &vet[i];
    }

    mudar(pVet, &x, &y);
    
    y = temp;
    
    for(int i = 0; i < y; i++){
        printf("%d\n", vet[i]);
    }

    return 0;
}