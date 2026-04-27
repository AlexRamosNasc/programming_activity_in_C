#include <stdio.h>

int main() {
    int A[64];
    int n;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    
    for(int i = 0; i < n; i++){
        int contador = 0;
        int ja_foi = 0;
        
        for(int j = 0; j < n; j++){
            if(A[i] == A[j]){
                contador++;
            }
        }
       
        for(int k = 0; k < i; k++){
            if(A[i] == A[k]){
                ja_foi = 1;
            }
        }
        
        if(ja_foi == 1){
            continue;
        }
        if(contador > 1){
            printf("%d ", A[i]);
        }
    }
    return 0;
}
