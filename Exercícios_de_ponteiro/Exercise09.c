#include <stdio.h>
int main(){
    int vet[5];
    int *pv;

    for(int i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
        pv = &vet[i];
        if(*pv % 2 == 0){
            printf("%p\n\n", pv);
        } 
    }

   return 0;
}
