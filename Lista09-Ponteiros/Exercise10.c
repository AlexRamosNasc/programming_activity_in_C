#include<stdio.h>

int main(){
    int vetor[5];
    int *pv;
    

    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
        pv = &vetor[i];
        printf("%d\n\n", (*pv) * 2);
    }

    return 0;
}