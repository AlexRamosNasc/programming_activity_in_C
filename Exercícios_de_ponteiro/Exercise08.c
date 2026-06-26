#include <stdio.h>
int main(){
    int vet[5];
    int *pv;

    for(int i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
        pv = &vet[i];
        printf("%d\n\n", (*pv) * 2);
    }

   return 0;
}
