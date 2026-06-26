#include <stdio.h>
int main(){
    float vet[10] = {1.01, 2.1, 3.2, 4.3, 5.4, 6.5, 7.6, 8.7, 9.8, 10.9};
    float *pv;

    for(int i = 0; i < 10; i++){
        printf("%p ", pv = &vet[i]);
    }

   return 0;
}
