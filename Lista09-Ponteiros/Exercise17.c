#include<stdio.h>

int mudar(int *vet[], int *array[], int *n1, int *n2, int *soma[]){
    if(*n1 != *n2){
        return 0;
    }else{
        for(int i = 0; i < *n1; i++){
            *soma[i] = (*vet[i]) + (*array[i]);
        }
        return 1;
    }
}

int main(){
    int n1, n2;
    printf("n1 = ");
    scanf("%d", &n1);
    printf("\nn2 = ");
    scanf("%d", &n2);

    int vet[n1], array[n2];
    int *Pvet[n1], *Parray[n2];
    printf("\nvet1[%d] = ", n1);
    for(int i = 0; i < n1; i++){
        scanf("%d", &vet[i]);
        Pvet[i] = &vet[i];
    }
    printf("\nvet2[%d] = ", n2);
    for(int i = 0; i < n2; i++){
        scanf("%d", &array[i]);
        Parray[i] = &array[i];
    }

    int soma[n1];
    int *Psoma[n1];
    for(int i = 0; i < n1; i++){
        soma[i] = 0;
        Psoma[i] = &soma[i]; 
    }

    if(mudar(Pvet, Parray, &n1, &n2, Psoma)){
        printf("\nO resultado é = ");
        for(int i = 0; i < n1; i++){
            printf("%d ", soma[i]);
        }
    }else{
        printf("\nO tamanho das arrays não são iguais e a soma não pode ser feita!\n");
    }

    return 0;
}