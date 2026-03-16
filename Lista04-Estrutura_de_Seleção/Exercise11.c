#include <stdio.h>
#include <math.h>

int main(){
    float x, A = (A * pow(x,2)), B = (B * x), C, X1, X2, Delta;
    
    scanf("%f %f %f", &A, &B, &C);
    
    if(A == 0){
        printf("Não é uma equação do segundo grau");
        return 0;
    }
    
    Delta = pow(B,2) - 4 * A * C;
    
    if(Delta > 0){
        X1 = (-B + sqrt(Delta)) / (2 * A);
        
        X2 = (-B - sqrt(Delta)) / (2 * A);
        
        printf("%.2f %.2f\n", X1, X2);
        return 0;
    }
    else if(Delta == 0){
        X1 = (-B + sqrt(Delta)) / (2 * A);
        
        printf("%.2f\n", X1);
        return 0;
    }
    else{
        printf("Não existe raiz real");
        return 0;
    }
    return 0;
}
