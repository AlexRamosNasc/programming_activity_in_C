#include <stdio.h>

int main() {
    int Cont = 0;
    int A[10];
    
    while(Cont < 10) {
        int repetido = 0;
        scanf("%d", &A[Cont]);
        for(int i = 0; i < Cont; i++) {
            if(A[Cont] == A[i]) {
                printf("Número repetido, digite outro:\n");
                repetido = 1;
                break; 
            }
        }
        if(repetido == 0) {
            Cont++;
        }
    }
    for(int i = 0; i < 10; i++){
            printf("%d ", A[i]);
        }
    return 0;
}
