#include <stdio.h>

int main(){
    double Massa;
    int Tempo = 0;
    
    scanf("%lf", &Massa);
    
    while(Massa >= 0.1){
        Massa *= 0.75;
        Tempo += 30;
    }
    printf("%d segundos", Tempo);
    
    return 0;
}
