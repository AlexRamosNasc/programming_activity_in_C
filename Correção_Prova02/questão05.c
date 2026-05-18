#include <stdio.h>
int main(){
  int n, i, j;
  float totalMes[12]
  scanf("%d", &n);
  float matriz[n][12];
  float totalAno[n];
  for(i = 0; i < n; i++){
    for(j = 0, j < 12; j++){
        scanf("%f", &matriz[i][j];
    }
  }
  for(i = 0; i < n; i++){
    for(j = 0; j < 12; j++){
      printf("%.2f ", matriz[i][j]);
    }
    printf("\n");
  }
  float soma = 0;
  for(i = 0; i < n; i++){
    for(j = 0; j < 12; j++){
      soma = soma + matriz[i][j];
    }
    totalAno[i] = soma;
    soma = 0;
  }
  soma = 0;
  for(j = 0; j < 12; j++){
    for(i = 0; i < n; i++){
      soma = soma + matriz[i][j];
    }
  totalMes[j] = soma;
  soma = 0;
  }
  for(int i = 0; i < n; i++){
    printf("%.2f\n", totalAno[i]);
  }
  for(int i = 0; i < 12; i++){
    printf("%.2f\n", totalMes[i]);
  }
  return 0;
}
