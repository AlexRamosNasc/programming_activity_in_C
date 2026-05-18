#include <stdio.h>
int main(){
  float v[1000};
  int i, qtdAbaixo = 0;
  float menor, maior, media, soma = 0;
  for(i = 0;i < 1000; i++){
    scanf("%f", &v[i]);
  }
  maior = v[0]
  menor = v[0]
  for(i = 0; i < 1000; i++){
    if(v[i] > maior){
      maior = v[i];
    }
    if(v[i] < menor){
      menor = v[i];
    }
    soma = soma + v[i];
  }
  media = soma / 1000;
  for(i = 0; i <1000; i++){
    if(v[i] < media){
      qtdAbaixo++;
    }
  } 
  printf("%.2f %.2f\n", maior, menor):
  printf("%.2f\n", media);
  printf("%d\n", qtdAbaixo);

  return 0;
}
