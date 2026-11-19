#include <stdio.h>
void prin(int *vet[]){
    printf("vet = {");
    for(int i = 0; i < 5; i++){
        printf("%d, ", *vet[i]);
    }
    printf("}\n");
}
void insert(int *vet[]){
    printf("vet = ");
    for(int i = 0; i < 5; i++){
        scanf("%d", vet[i]);
    }
    prin(vet);
}
void grande(int *vet[], int *maior){
    *maior = *vet[0];
    for(int i = 1; i < 5; i++){
        if(*vet[i] > *maior){
            *maior = *vet[i];
        }
    }
}
int main(){
    int vet[5], maior;
    int *Pvet[5];
    for(int i = 0; i < 5; i++){
        Pvet[i] = &vet[i];
    }
    insert(Pvet);
    grande(Pvet, &maior);
    printf("maior = %d\n", maior);
    return 0;
}