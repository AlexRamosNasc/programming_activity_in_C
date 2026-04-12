#include <stdio.h>

int main()
{
    int N, X = 1, Divisor;
    
    scanf("%d", &N);
    
    while(N >= X){
        Divisor = N % X;
        if(Divisor == 0){
            printf(" %d", X);
        }
        X++;
    }
    return 0;
}
