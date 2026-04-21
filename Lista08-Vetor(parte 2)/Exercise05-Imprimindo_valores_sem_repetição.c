#include <stdio.h>

int main() {
    int  n, cont = 0;
    int A[64];
    
    scanf("%d", &n);
    
    while(cont < n){
        int Repetido = 0;
        
        scanf("%d", &A[cont]);
        
        for(int i = 0; i < cont; i++){
            if(A[cont] == A[i]){
                Repetido = 1;
                n = n - 1;
                break;
            }
        }
        if(Repetido == 0){
            cont++;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    
    return 0;
}
