#include <stdio.h>

int main()
{
    int X, linha = 1 , coluna;
    
    scanf("%d", &X);
    
    while (linha <= X){
        coluna = 1;
        while (coluna <= linha){
            printf("*");
            coluna++;
        }
        printf("\n");
        linha++;
    }
    
    return 0;
}
