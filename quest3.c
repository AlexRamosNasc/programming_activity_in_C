#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a, b, area;

//infomação
void retangulo(){
    printf("Informe o tamanho do lado 1: \n");
    scanf("%f", &a);

    printf("Informe o tamanho do lado 2: \n");
    scanf("%f", &b);
}

void triangulo(){
    printf("Informe o tamanho do base: \n");
    scanf("%f", &a);

    printf("Informe o tamanho do altura: \n");
    scanf("%f", &b);
}

void circulo(){
    printf("Informe o raio: \n");
    scanf("%f", &a);
}

//calculo
void retanguloC(float a, float b){
    area = a * b;
}

void trianguloC(float a, float b){
    area = (a * b) / 2;
}

void circuloC(float a){
    area = pow(a, 2) * M_PI;
}

//entrega
void retanguloE(){
    printf("A area do retangulo eh: %f\n", area);
}

void trianguloE(){
    printf("A area do triangulo eh: %f\n", area);
}

void circuloE(){
    printf("A area do circulo eh: %f\n", area);
}

int main(){
    int num, figura;

    do{
        printf("Qual figura dejesa calcular? digite 1: para retângulo, 2: para triangulo, 3: para circulo.\n");
        scanf("%d", &figura);

        switch(figura){
            case 1: retangulo(); retanguloC(a, b); retanguloE(); break;
            case 2: triangulo(); trianguloC(a, b); trianguloE(); break;
            case 3: circulo(); circuloC(a); circuloE(); break;
            default: printf("Valor invalido\n"); break;
        }

        printf("Se quiser encerrar o programa digite 0. Caso contrario, digite qualquer numero\n");
        scanf("%d", &num);

    }while(num != 0);

    return 0;
}