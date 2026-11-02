#include<stdio.h>

int mudar(int *vet[], int *string[]){
    int x = 0;
    for(int i = 0; i < 5; i++){
        for( int j = 0; j < 5; j++){
            if(*string[i] == *vet[j]){
                x = 1;
            }
        }
    }
    if(x){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int vet[5], string[5];
    int *pVet[5], *pString[5];

    for(int i = 0; i < 5; i++){
        scanf("%d %d", &vet[i], &string[i]);
    }
    
    for(int i = 0; i < 5; i++){
        pVet[i] = &vet[i];
        pString[i] = &string[i];
    }

    if(mudar(pVet, pString)){
        printf("A segunda string ocorre dentro da primeira!\n");
    }
    else{
        printf("A segunda string não ocorre dentro da primeira!\n");
    }

    return 0;
}