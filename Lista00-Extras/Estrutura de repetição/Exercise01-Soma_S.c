#include <stdio.h>

int main()
{
    int X = 1;
    float S = 0, N;
    
    scanf("%f", &N);
    
    if(N > 0){
        while(N >= X){
            S += (N / X);
            X++;
        }
        printf("%f", S);
    }
    
    return 0;
}
