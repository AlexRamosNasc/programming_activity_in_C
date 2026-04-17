#include <stdio.h>
#include <math.h>

int main() {
    int Num, i = 0 , X = 0 , Y, w = 0, Z;
    int binario[16];
    int Valor[16];

    scanf("%d", &Num);

    if (Num == 0) {
        printf("0");
        return 0;
    }
    
    Y = Num;
    Z = Num;
    
    while(Z > 0){
        Valor[w] = Z % 10;
        Z = Z / 10;
        w++;
    }
    
    while (Y > 0) {
        binario[i] = pow(2,i);
        Y = Y / 10;
        i++;
    }
    
    for (int j = 0; j < i; j++) {
        if(Valor[j] == 0){
            binario[j] = 0;
        }
    }
    
    for (int j = 0; j < i; j++) {
        X += binario[j];
    }
    printf("%d", X);
    return 0;
}
