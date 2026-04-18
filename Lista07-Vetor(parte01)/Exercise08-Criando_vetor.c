#include <stdio.h>

int main()
{
    int Num, N, i;
    int A[20], B[20];
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &Num);
    }
    for(int i = 0; i < 10; i++){
        B[i] = A[9 - i];
    }
    printf("%d", B[i]);
    return 0;
}TERMINAR
