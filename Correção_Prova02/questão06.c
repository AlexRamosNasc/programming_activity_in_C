#include <stdio.h>
int main(){
  int i, n, med;
  scanf("%d", &n);
  float v[n];
  for(int i = 0; i < n; i++){
    scanf("%f", &v[i]);
  }
  if(n % 2 != 0){
    med = v[n / 2];
  }
  else{
    med = (v[n / 2] + v[n / 2]) / 2;
  }
  printf("Mediana %.2f", med);
  return 0;
}
