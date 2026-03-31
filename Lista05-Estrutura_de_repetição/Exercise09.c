#include <stdio.h>

int main(){
    int Numero_A, Numero_B, Multiplicaçao = 0;
    
    scanf("%d %d", &Numero_A, &Numero_B);
    
    
    if(Numero_B > 0){
        for(int I = 1; I <= Numero_B; I++){
            Numero_A + Numero_A;
            Multiplicaçao += Numero_A; 
        }
    }
    else{
        for(int I = -1; I >= Numero_B; I--){
            Numero_A + Numero_A;
            Multiplicaçao -= Numero_A;
        }
    }
    printf("%d", Multiplicaçao);
    
    return 0;
}
