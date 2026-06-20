#include <stdio.h>

int temp(int C){
    int F;
    F = C * (9.0 / 5.0) + 32.0;
    return F;
}

int main(){
    int C;
    printf("Digite a temperatura em celsius: ");
    scanf("%d", &C);
    printf("A temperatura em fahrenheit = %dF", temp(C));
    return 0;
}
