#include <stdio.h>

int main()
{
    int A, B, Resto;
    
    scanf("%d %d", &A, &B);
    
    while(Resto != 0){
        //1
        Resto = A % B;
        
        //2
        if(Resto == 0){
            printf("%d", B);
        }
        
        //3
        else{
            A = B;
            B = Resto;
        }
    }
    return 0;
}
