#include <stdio.h>

void triangulo(float a, float b, float c){
    if (a > (b + c) || b > (c + a) || c > (a + b)){
        printf("Nao forma um triangulo");
    } 
    else if (a == b && b == c){
        printf("Eh um triangulo equilatero");
    }
    else if (a == b && b != c || a == c && c != b || b == c && c != a){
        printf("Eh um triangulo isoceles");
    }
    else{
        printf("Eh um triangulo escaleno");
    }

}

int main(){
    float a, b, c;
    printf("Digite tres valores de um triangulo: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a <= 0 || b <= 0 || c <= 0){
        printf("Valor invalido, nenhum valor pode ser menor ou igual a zero.");
        return 0;
    }
    triangulo(a, b, c);
    return 0;
}
