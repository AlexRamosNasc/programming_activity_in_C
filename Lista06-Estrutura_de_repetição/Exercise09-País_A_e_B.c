#include <stdio.h>

int main(){
    double PaisA, PaisB;
    int Anos = 0;
    
    PaisA = 5000000;
    PaisB = 10000000;
    
    while(PaisB >= PaisA){
        PaisA *= 1.03;
        PaisB *= 1.02;
        Anos++;
    }
    printf("%d", Anos);
    
    return 0;
}
