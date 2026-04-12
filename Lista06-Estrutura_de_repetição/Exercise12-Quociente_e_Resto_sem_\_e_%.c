#include <stdio.h>

int main()
{
    int A, B, Quociente = 0, Resto;
    
    scanf("%d %d", &A , &B);
    
    while(A > 0 && B > 0 && A >= B){
        A -= B;
        
        if(A < B && A > 0){
            Resto = A;
        }
        if(A == 0){
            Resto = A;
        }
        
        Quociente++;
    }
    printf("Quociente: %d\nResto: %d\n", Quociente, Resto);
    
    return 0;
}
