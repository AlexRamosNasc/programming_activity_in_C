#include <stdio.h>

int main() {
    int A[64];
    int n, temp, trocou = 1; 
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    while(trocou == 1){
        trocou = 0;
        for(int j = 0; j < n - 1; j++){
            if(A[j] > A[j + 1]){
                temp = A[j + 1];
                A[j + 1] = A[j];
                A[j] = temp;
                trocou = 1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    return 0;
}
