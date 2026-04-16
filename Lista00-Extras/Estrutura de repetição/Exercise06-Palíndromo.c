#include <stdio.h>

int main(){
    int Num, X, inverso = 0;
    scanf("%d", &Num);
    
    X = Num;
    
    while(X > 0){
        inverso = (inverso * 10) + (X % 10);
        X /= 10;
    }
    
    if(inverso == Num){
        printf("Sim");
    }
    else{
        printf("Não");
    }
    return 0;
}
