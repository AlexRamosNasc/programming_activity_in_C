#include <stdio.h>

int main()
{
    int A[20], B[20];
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }
    
    for(int j = 0; j < 10; j++){
        B[j] = A[9 - j];
    }
    for(int k = 0; k < 10; k++){
        printf("%d ", A[k]);
    }

    for(int k = 0; k < 10; k++){
        printf("%d ", B[k]);
    }
    return 0;
}
