#include <stdio.h>
int main (){
	int N, i;
	scanf(“%d”, &N);
	float v[N];
  for (i = 0; i < N; i++) {
    if ( i % 2 == 0) { 
      scanf(“%f”,  &v[i]);
    }
    else {
      v [i] = v[ i - 1]  * v[ i - 1];
    }
  }
  for( i + 0; i < N; i++) {
  	printf(“%.2f\n”, v[i]);
  }
}
