#include <stdio.h>
#include <stdlib.h>

float x, y, z;

void triangulo(float x, float y, float z){
    if(x > y + z){
        printf("Esse triangulo nao existe!\n");
    }
    else if (y > x + z){
        printf("Esse triangulo nao existe!\n");
    }
    else if (z > x + y){
        printf("Esse triangulo nao existe!\n");
    }
    else{
        if(x == y && y == z){
            printf("Triangulo Equilatero\n");
        }
        else if (x == y && y != z){
            printf("Triângulo Isósceles\n");
        }
        else if(x == z && z != y){
            printf("Triângulo Isósceles\n");
        }
        else if(z == y && y != x){
            printf("Triângulo Isósceles\n");
        }
        else{
            printf("Triângulo Escaleno\n");
        }
    }
}

int main(){
    int num;

    do{
        printf("Digite os lados do triangulo!\n");
        scanf("%f %f %f", &x, &y, &z);

        triangulo(x, y, z);

        printf("se deseja encerrar digite 0, caso contrario 1\n");
        scanf("%d", &num);
    }while(num != 0);
    return 0;
}
