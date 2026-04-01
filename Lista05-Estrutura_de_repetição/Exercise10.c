#include <stdio.h>

int main(){
    int Num, Ultimo = 1, AnteUltimo = 0, New = 0;
    
    scanf("%d", &Num);
    
    if(Num == 1){
        printf("0");
    }
    else{
        printf("0 1");
        
        for(int I = 1; I <= (Num - 2); I++){
            New = Ultimo + AnteUltimo;
            AnteUltimo = Ultimo;
            Ultimo = New;
            printf(" %d", New);
        }
    }
    
    return 0;
}
