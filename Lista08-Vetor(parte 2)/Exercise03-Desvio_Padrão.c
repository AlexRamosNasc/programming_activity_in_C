#include <stdio.h>
#include <math.h>

int main() {
    float Dp, n, Soma = 0, Ma;
    float A[64];
    
    scanf("%f", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%f", &A[i]);
    }
    for (int i = 0; i < n; i++) {
        Soma += A[i];
    }
    
    Ma = Soma / n;
    Soma = 0;
    
    for (int i = 0; i < n; i++) {
        A[i] = pow((A[i] - Ma), 2);
    }
    for (int i = 0; i < n; i++) {
        Soma += A[i];
    }
    Dp = sqrt((Soma / (n - 1)));
    printf("%.2f", Dp);
    
    return 0;
}
