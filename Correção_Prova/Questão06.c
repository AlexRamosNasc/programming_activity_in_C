#include <stdio.h>

int main(){
    float n, x, r, e;
    scanf("%f %f", &n, &x);
    r = x;
    while(e > 0.0001){
      e = r * r - n;
      if(e < 0){
        e = e * -1;
      }
      if(e >= 0.0001){
        x = r;
        r = (x + n / x) / 2;
      }
    }
    printf("%.6f", r);
    return 0;
}
