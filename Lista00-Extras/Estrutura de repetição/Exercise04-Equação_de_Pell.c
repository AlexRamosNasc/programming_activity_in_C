#include <stdio.h>

int main()
{
    int Num, Divisor = 1, Somador = 0;
    
    scanf("%d", &Num);
    
    while(Divisor <= Num){
        Num -= Divisor;
        Divisor += 2;
        Somador++;
    }
    printf("%d", Somador);

    return 0;
}
