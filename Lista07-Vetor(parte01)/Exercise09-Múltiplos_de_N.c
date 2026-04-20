#include <stdio.h>

int main()
{
    int n, x, Quant = 0;
    int A[64];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    
    scanf("%d", &x);
    
    for(int i = 0; i < n; i++){
        if(A[i] % x == 0){
            Quant++;
        }
    }
    printf("%d", Quant);
    
    return 0;
}
