#include <stdio.h>
#include <stdlib.h>

float grande;

float maior(float x, float y){

    if(x > y){
        grande = x;
    }
    else{
        grande = y;
    }

    return grande;
}

int main(){
    float a, b, c, d;

    printf("digite 4 numeros para descobrir qual é maior!\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    maior(a, b);
    maior(grande, c);

    printf("O maior numere é o: %f\n", maior(grande, d));

    return 0;
}
