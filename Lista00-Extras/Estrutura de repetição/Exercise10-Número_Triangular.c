#include <stdio.h>

int main(){
    int Num, n = 0, i = 1;
    
    scanf("%d", &Num);
    
    while(n < Num){   
        n = i * (i + 1) * (i + 2);
        i++;
    }

    if(n == Num){
        printf("É um número triangular");
    }
    else{
        printf("Não é um número triangular");
    }
    
    return 0;
}
