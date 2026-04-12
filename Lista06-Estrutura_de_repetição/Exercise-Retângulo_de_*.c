#include <stdio.h>

int main()
{
    int A, B, Fim = 0, X = 0;
    
    scanf("%d %d", &A, &B);
    
    while(Fim < B * A){
        printf("*");
        X++;
        if(X == B){
            X = 0;
            printf("\n");
        }
        Fim++;
    }
    
    return 0;
}
