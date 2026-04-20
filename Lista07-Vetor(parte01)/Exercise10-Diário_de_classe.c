#include <stdio.h>

int main()
{
    float A[15], B[15], C[15];
    
    for(int i = 0; i < 15; i++){
        scanf("%f", &A[i]), scanf("%f", &B[i]), scanf("%f", &C[i]);
    }
    printf("N1 N2 N3 Media\n");
    
    for(int i = 0; i < 15; i++){
        printf("%.1f ", A[i]), printf("%.1f ", B[i]), printf("%.1f ", C[i]), printf("%.1f\n", ((A[i] + B[i] + C[i]) / 3));
    }
    
    return 0;
}
