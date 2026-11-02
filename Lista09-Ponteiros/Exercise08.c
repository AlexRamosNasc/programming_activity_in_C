#include <stdio.h>

int main(){
    float vetor[10];

    for(int i = 0; i < 10; i++){
        printf("%p\n", &vetor[i]);
    }

    return 0;
}