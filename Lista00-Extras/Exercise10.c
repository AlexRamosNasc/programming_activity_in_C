#include <stdio.h>
int main(){
    int X[7][6];
    float sT = 0, x = 0, mD, mS[32], mDS[32], dM, dia;
    int n;
    
    printf("Digite o número de semanas deste mês:\n");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 6; j++){
            scanf("%d", &X[i][j]);
        }
    }
    
    printf("Terça-feira | Quarta-feira | Quinta-feira | Sexta-feira | Sábado | Domingo |\n");
    for(int i = 0; i < n; i++){
        printf("Semana %d --> ", i + 1);
        
        for(int j = 0; j < 6; j++){
            printf("%d | ", X[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 6; j++){
            sT += X[i][j];
        }
    }
    printf(" Total de clientes no mês = %.0f\n", sT);
    
    mD = sT / (n * 6);
    
    printf(" média diária de clientes no mês = %.2f\n", mD);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 6; j++){
            if(X[i][j] > mD){
                x++;
            }
        }
    }
    printf("quantidade de dias com movimento acima da média diária = %.0f\n", x);
    
    for(int i = 0; i < n; i++){
        sT = 0;
        for(int j = 0; j < 6; j++){
            sT += X[i][j];
        }
        mS[i] = sT / 6;
    }
    
    for(int i = 0; i < n; i++){
        printf("Média diária de clientes na semana %d = %.2f\n", i + 1, mS[i]);
    }
    
    for(int i = 0; i < 6; i++){
        sT = 0;
        for(int j = 0; j < n; j++){
            sT += X[j][i];
        }
        mDS[i] = sT / n;
    }
    
    for(int i = 0; i < 6; i++){
        printf("Média diária de clientes por dia da semana %d = %.2f\n", i + 1, mDS[i]);
    }
    
    dM = X[0][0];
    
    for(int i = 0; i < n; i++){
        dM = X[i][0]; 
        dia = 1;
        for(int j = 0; j < 6; j++){
            if(X[i][j] < dM){
                dM = X[i][j];
                dia = j + 1;
            }
        }
        printf("O dia de menor movimento da semana %d é o %d e o número de clientes nesse dia foi %d\n", i + 1, dia, dM);
    }
    return 0;
}
