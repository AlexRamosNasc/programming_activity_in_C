#include <stdio.h>
#include <stdlib.h>

float comprimento, largura, altura, volumeM, volumeA = 0, volumeC;
int quantidade;

float calculo_de_volume(float comprimento, float largura, float altura, int quantidade){

   volumeC = comprimento * largura * altura * quantidade;

    return volumeC;
}

float Verificar_volume( float volumeM, float volumeA, float volumeC){

    if(volumeA + volumeC > volumeM){
        volumeA = 0;
    }
    else if(volumeA + volumeC <= volumeM){
        volumeA = volumeA + volumeC;
    }

    return volumeA;
}

int main(){ 
    float x, y, z, num;

    printf("Qual o comprimeno a largura e a altura do compartimento do caminhao? \n");
    scanf("%f %f %f", &x, &y, &z);

    volumeM = x * y * z;

    do{
    printf("Quantas caixas iguais voce vai colocar? \n");
    scanf("%d", &quantidade);

    printf("Qual o comprimento, largura e altura da sua caixa? \n");
    scanf("%f %f %f", &comprimento, &largura, &altura); 

    calculo_de_volume(comprimento, largura, altura, quantidade);

    volumeA = Verificar_volume(volumeM, volumeA, volumeC);

    if(volumeA == 0){
        printf("Volume do caminhao foi superado, nao é possivel por essas caxias!\n");
    }
    if(volumeA <= volumeM && volumeA > 0){
        printf("Seu caminhao ainda tem: %fm3 de volume restantes", (volumeM - volumeA));
    }

    printf("se quiser encerrar basta digitar 0, caso contrario digite 1");
    scanf("%d", &num);

    }while(num != 0);

    return 0;
}
