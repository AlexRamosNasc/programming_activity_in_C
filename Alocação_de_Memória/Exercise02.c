#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor;
    int meses;
    float jurus;

    scanf("%f", &valor);
    scanf("%d", &meses);
    scanf("%f", &jurus);

    float *numeses;
    numeses = (float *) malloc(meses * sizeof(float));

    numeses[0] = valor;

    for(int i = 1; i < meses; i++){
        numeses[i] = numeses[i - 1] * jurus;
    }

    for(int i = 0; i < meses; i++){
        printf("%.2fR$, ",numeses[i]);
    }

    free(numeses);
    return 0;
}