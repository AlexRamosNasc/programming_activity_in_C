#include <stdio.h>

int main()
{
    int A[10], B[10], C[10];
    int k = 0, l = 0;
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < 10; i++){
        scanf("%d", &B[i]);
    }
    while(k != 10){
        for(int j = 0; j < 10; j++){
            if(A[k] == B[j]){
                int repetido = 0;
                
                for(int j = 0; j < l; j++){
                    if(C[j] == A[k]){
                        repetido = 1;
                    } 
                }
                if(!repetido){
                    C[l] = A[k];
                    l++;
                }
            }
        }
        k++;
        
    }
    for(int i = 0; i < l; i++){
        printf("%d ", C[i]);
    }
    
    return 0;
}
