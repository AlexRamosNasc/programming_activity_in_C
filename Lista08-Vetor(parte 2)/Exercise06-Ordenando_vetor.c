#include <stdio.h>

int main()
{
    int n, X = 0, temp = 0;
    int A[64], B[64];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(A[X] > A[X + 1]){
                temp = A[X];
                A[X] = A[X + 1];
                A[X + 1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);A
    
    
    return 0;
}TERMINAR
