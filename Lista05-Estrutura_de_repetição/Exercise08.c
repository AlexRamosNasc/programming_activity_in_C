#include <stdio.h>

int main(){
    int N;
    
    scanf("%d", &N);
    
    int Fator = 1;
    
    for(int I = 1; I <= N; I++){
        Fator *= I;
        
    }
    printf("%d", Fator);
    
    return 0;
}
