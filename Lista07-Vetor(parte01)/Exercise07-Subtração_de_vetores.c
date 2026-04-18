#include <stdio.h>

int main()
{
    int Num, N;
    int A[32], B[32], C[32];
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &Num);
        A[i] = Num;
    }
    for(int i = 0; i < N; i++){
        scanf("%d", &Num);
        B[i] = Num;
    }
    for(int i = 0; i < N; i++){
        C[i] = A[i] - B[i];
    }
    for(int i = 0; i < N; i++){
        printf("%d ", C[i]);
    }

    return 0;
}
