#include <stdio.h>

int main(){
    int X;
    
    scanf("%d",&X);
    
    if(X == 1 || X == 7){
        printf("Fim de semana");
    }
    else if(X > 1 && X < 7){
        printf("Dia útil");
    }
    else{
        printf("Número não corresponde a dia da semana");
    }
    
    return 0;
}
