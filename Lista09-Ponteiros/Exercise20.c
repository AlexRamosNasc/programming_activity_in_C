#include <stdio.h>

void mudar(float *Pn1, float *Pn2, float *Pmedia, float *PmediaP){
    *Pmedia = ((*Pn1) + (*Pn2)) / 2;
    *PmediaP = ((*Pn1) + ((*Pn2) * 2)) / 3;
}

int main(){
    float n1, n2, media = 0, mediaP = 0;
    scanf("%f %f", &n1, &n2);

    mudar(&n1, &n2, &media, &mediaP);

    printf("media = %.2f, media ponderada = %.2f\n", media, mediaP);
    
    return 0;
}