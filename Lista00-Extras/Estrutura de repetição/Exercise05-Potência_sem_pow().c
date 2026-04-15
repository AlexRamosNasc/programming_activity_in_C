#include <stdio.h>

int main()
{
    float A, X = 1, Y;
    int B;
    
    scanf("%f %d", &A, &B);
    
    if(A == 0){
        printf("Não é uma potência"); return 0;
    }
    else if(B == 0){
        printf("1.0000"); return 0;
    }
    else if(B < 0){
        for(int I = 0; I > B; I--){
        X = X * A;
        }
        
        Y = 1 / X;
        printf("%.4f", Y);
        return 0;
    }
    for(int I = 0; I < B; I++){
        X = X * A;
    }
    printf("%.4f", X);
    return 0;
}
