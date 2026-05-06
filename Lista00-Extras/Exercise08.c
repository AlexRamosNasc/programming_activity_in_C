#include <stdio.h>

int main(){
    int m[4][4] = {
        {1, 4, 3, 6},
        {4, 1, 5, 7},
        {3, 5, 1, 8},
        {6, 7, 8, 1}
    };
    int n, paradas[64], custoTotal = 0;
    
    printf("Digite o numero de cidades a viajar.\n");
    scanf("%d", &n);
    
    printf("Digite numeros de 0 a 3 que represente suas paradas.\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &paradas[i]);
    }
    
    for(int i = 1; i < n; i++){
        custoTotal += m[paradas[i - 1]][paradas[i]];
    }

    printf("Soma total = %d\n", custoTotal);
    
    return 0;
}
