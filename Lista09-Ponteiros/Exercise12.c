#include<stdio.h>

int mudar(int *pa, int *pb, int *pc){
    int temp;
    int vet[3];
    vet [0] = *pa;
    vet [1] = *pb;
    vet [2] = *pc;

    for(int i = 0; i < 2; i++){
        for(int j = 1; j < 3; j++){
            if(vet[i] > vet[j]){
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }

    *pa = vet[0]; 
    *pb = vet[1]; 
    *pc = vet[2];

    if(*pa == *pb && *pb == *pc){
        return 1;
    }
    
    if(*pa != *pb || *pb != *pc){
        return 0;
    }
}

int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(mudar(&a, &b, &c)){
        printf("Todos são iguais\n");
        printf("A = %d, B = %d, C = %d\n", a, b, c);
    }
    else{
        printf("Não são iguais\n");
        printf("A = %d, B = %d, C = %d\n", a, b, c);
    }
    
    return 0;
}