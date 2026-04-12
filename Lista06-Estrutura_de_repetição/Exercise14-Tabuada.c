#include <stdio.h>

int main()
{
    int A;
    
    scanf("%d", &A);
    
    while(A != -1){
        printf("%d x 1 = %d\n",  A, A * 1);
        printf("%d x 2 = %d\n",  A, A * 2);
        printf("%d x 3 = %d\n",  A, A * 3);
        printf("%d x 4 = %d\n",  A, A * 4);
        printf("%d x 5 = %d\n",  A, A * 5);
        printf("%d x 6 = %d\n",  A, A * 6);
        printf("%d x 7 = %d\n",  A, A * 7);
        printf("%d x 8 = %d\n",  A, A * 8);
        printf("%d x 9 = %d\n",  A, A * 9);
        printf("%d x 10 = %d\n", A, A * 10);
        
        scanf("%d", &A);
    }
    
    return 0;
}
