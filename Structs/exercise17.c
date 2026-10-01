#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct V{
    int codOrig;
    int codDest;
};
struct A{
    int codigo;
    int quantSai;
    int quantChega;
};

struct V ler(void){
    struct V a;
    do{
        scanf("%d", &a.codOrig);
        scanf("%d", &a.codDest);
        if(a.codOrig < 0 || a.codOrig > 4 || a.codDest < 0 || a.codDest > 4 ){
            printf("Numero invalido tente novamente");
        }
    }while (a.codOrig < 0 || a.codOrig > 4 || a.codDest < 0 || a.codDest > 4);
    return a;
}
struct A ler2(void){
    struct A a;
    do{
        scanf("%d", &a.codigo);
        if(a.codigo < 0 || a.codigo > 4){
            printf("Numero invalido tente novamente");
        }
    }while (a.codigo < 0 || a.codigo > 4);
    return a;
}

int main(){
    struct V vetV[5];
    struct A vetA[5];

    for(int i = 0; i < 5; i++){
        vetV[i] = ler();
    }
    for(int i = 0; i < 5; i++){
        vetA[i] = ler2();
    }
    
    for(int i = 0; i < 5; i++){
    vetA[i].quantSai = 0;
    vetA[i].quantChega = 0;
    }
    for(int j = 0; j < 5; j++){
        for(int i = 0; i < 5; i++){
            if(vetV[j].codOrig == vetA[i].codigo){
                vetA[i].quantSai++;
            }
            if(vetV[j].codDest == vetA[i].codigo){
                vetA[i].quantChega++;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        printf("\n--- Aeroporto Código %d ---", vetA[i].codigo);
        printf("\nVoos de Saida: %d | Voos de Chegada: %d\n", vetA[i].quantSai, vetA[i].quantChega);
        for(int j = 0; j < 5; j++){
            if(vetV[j].codDest == vetA[i].codigo){
                printf("Aero porto %d esta com os voos de origem: %d e destino: %d\n", vetA[i].codigo, vetV[j].codOrig, vetV[j].codDest);
            }
            if(vetV[j].codOrig == vetA[i].codigo){
                printf("Aero porto %d esta com os voos de origem: %d e destino: %d\n", vetA[i].codigo, vetV[j].codOrig, vetV[j].codDest);
            }
        }
    }

    return 0;
}