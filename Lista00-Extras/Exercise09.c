#include <stdio.h>

int main(){
    int m[7][6];
    int n, clientes[234], custoTotal = 0;
    
    printf("Digite o numero de semenas do mês.\n");
    scanf("%d", &n);
    
    printf("Digite numeros de clientes por dia.\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 6; j++){
            scanf("%d", &m[i][j]);
        }
    }
    printf("         | Terça-feira | Quarta-feira | Quinta-feira | Sexta-feira | Sábado | Domingo |\n");
    for(int i = 0; i < n; i++){
        printf("Semana %d |", i + 1);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 6; j++){
                printf("       %d    |", m[i][j]);
            }
        }
        printf("\n");
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 6; j++){
            pr
        }
    }

    printf("Soma total = %d\n", custoTotal);
    
    return 0;
} TERMINAR!!
