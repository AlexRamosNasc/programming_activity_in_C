#include <stdio.h>
int mudar(int *vet1[], int *vet2[], int *vet3[]){
    int x = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(*vet1[i] == *vet2[j]){
                *vet3[x] = *vet1[i];
                x++;
                break;
            }
        }
    }
    return x;
}
int main(){
    int x;
    int vet1[5], vet2[5], vet3[5];
    int *Pvet1[5], *Pvet2[5], *Pvet3[5];

    for(int i = 0; i < 5; i++){
        Pvet3[i] = &vet3[i];
    }

    printf("vet1 = ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &vet1[i]);
        Pvet1[i] = &vet1[i];
    }

    printf("\nvet2 = ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &vet2[i]);
        Pvet2[i] = &vet2[i];
    }

    x = mudar(Pvet1, Pvet2, Pvet3);

    printf("\nvet3 = {");
    for(int i = 0; i < x; i++){
        printf("%d, ", vet3[i]);
    }
    printf("}\n");
    
    return 0;
}