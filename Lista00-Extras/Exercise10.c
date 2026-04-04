#include <stdio.h>

int main(){
    int A, B, Resto, Mult, Mmc;

    scanf("%d %d", &A, &B);
    
    Mult = A * B;
    
    do{
        Resto = A % B;
        A = B;
        B = Resto;
        
    }while(Resto != 0);
    
    Mmc = Mult / A;
    
    printf("MDC = %d\nMMC = %d", A, Mmc);
    
    return 0;
}
