#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet;
    vet = (int *) calloc(1500, sizeof(int));

    for(int i = 0; i < 1500; i++){
        if(vet[i] != 0){
            printf("\nerror!!\n");
            return 0;
        }else{
            vet[i] = i;
        }
    }

    printf("dez primeiros:\n");
    for(int i = 0; i < 10; i++){
        printf("%d, ", vet[i]);
    }
    printf("\n");

    printf("dez ultimos:\n");
    for(int i = 1490; i < 1500; i++){
        printf("%d, ", vet[i]);
    }
    printf("\n\n");

    free(vet);
    return 0;
}