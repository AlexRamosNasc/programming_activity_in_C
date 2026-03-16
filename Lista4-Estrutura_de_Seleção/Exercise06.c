#include <stdio.h>

int main(){
    int X, Y;
    
    scanf("%d %d", &X, &Y);
    
    if(X == Y){
        printf("As duas pessoas têm a mesma idade");
    }
    else{
        int Mais_velho = (X < Y) ? X : Y;
        
        printf("O mais velho nasceu em %d", Mais_velho);
    }
    
    return 0;
}
