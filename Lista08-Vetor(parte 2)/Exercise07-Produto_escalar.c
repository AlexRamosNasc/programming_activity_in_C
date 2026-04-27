#include <stdio.h>
#include <math.h>

int main() {
    int u[64], v[64];
    int n;
    float angulo, produtoEscalar, X, Y, A = 0, B = 0, C, radianos, cosseno;
    double pi = M_PI;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &u[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    
    for(int i = 0; i < n; i++){
        produtoEscalar += u[i] * v[i];
    }
    
    for(int i = 0; i < n; i++){
        A += pow(u[i],2);
    }
    A = sqrt(A);
    
    for(int i = 0; i < n; i++){
        B += pow(v[i],2);
    }
    B = sqrt(B);
    
    C = A * B;
    
    cosseno = produtoEscalar / C;
    
    radianos = acos(cosseno);
    
    angulo = radianos * (180 / pi);
    
    printf("u.v = %.2f\n", produtoEscalar);
    printf("angulo = %.2f\n", angulo);
}
