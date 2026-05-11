#include <stdio.h>

int main(){
    float ha, litrosA, precoA, precoB, litrosB, menor_preco;
    scanf("%f", &ha);
    
    litrosA = ha / 0.5;
    litrosB = ha / 0.4;
    
    if(litrosA >= 20){
        precoA = litrosA * 4.2;
    }
    else{
        precoA = (litrosA * 4.2) + 25;
    }
    
    precoB = (litrosB * 3) + 25;
    
    if(precoA < precoB){
        menor_preco = precoA;
    }
    else if(precoB < precoA){
        menor_preco = precoB;
    }
    else{
        menor_preco = precoA;
    }
    
    printf("%.2f", menor_preco);
}
