#include <stdio.h>
int main() {
    float salario, pctConcluiu, media3, maiorS = 0, soma3 = 0;
    int tipoInst, i, n, q1 = 0, q2 = 0, q3 = 0, concluirao = 0;
  
    scanf("%d", &n);
  
    for(int i = 0; i < n; i++){
        scanf("%f", &salario);
        while(salario < 0){
            scanf("%f", &salario);
        }
      
        scanf("%d", &tipoInst);
        while(tipoInst > 3 || tipoInst < 1){
            scanf("%d", &tipoInst);
        }
      
        if(tipoInst == 1){
            q1 = q1 + 1;
            concluirao = concluirao + 1;
            if(salario > maiorS){
                maiorS = salario;
            }
        }
      
        if(tipoInst = 2){
            q2 = q2 + 1;
            concluirao = concluirao + 1;
            if(salario > maiorS){
                maiorS =  salario;
            }
        }
      
        if(tipoInst == 3){
            q2++;
            soma3 = soma3 + salario;
        }
    }
  
    printf("%d %d %d", q1, q2, q3);
  
    pctConcluiu = (concluirao / (q1 + q2 + q3)) * 100;
  
    printf("%.2f", pctConcluiu);
  
    return 0;
}
