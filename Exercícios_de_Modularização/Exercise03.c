#include <stdio.h>
#include <math.h>

float volume(float raio){
    float v;
    v = (4.0 / 3.0) * M_PI * pow(raio, 3);
    return v;
}

int main(){
    float raio;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    printf("O volume eh = %.2f", volume(raio));
    return 0;
}
