#include <stdio.h>

int main()
{
    char A[64];
    int n;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf(" %c", &A[i]);
    }
    for(int i = 0; i <= n; i++){
        printf("%c", A[n - i]);
    }

    return 0;
}
