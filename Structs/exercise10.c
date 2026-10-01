#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Baralho{
    int copas[13];
    int ouros[13];
    int espadas[13];
    int paus[13];
    int jokers[2];
};

int main(){
    srand(time(NULL));
    struct Baralho A;

    for(int i = 0; i < 13; i++){
        A.copas[i] = i + 1;
        A.ouros[i] = i + 1;
        A.espadas[i] = i + 1;
        A.paus[i] = i + 1;
    }
    for(int i = 0; i < 2; i++){
        A.jokers[i] = i + 1;
    }

    int tipocarta = (rand() % 5) + 1;
    int valorcarta = rand() % 13;
    int valorjoker = rand() % 2;


    switch (tipocarta){
    case 1: printf("O jogar 1 ganho um copa de %d\n", A.copas[valorcarta]); break;
    case 2: printf("O jogar 1 ganho um ouros de %d\n", A.ouros[valorcarta]);  break;
    case 3: printf("O jogar 1 ganho um espadas de %d\n", A.espadas[valorcarta]);  break;
    case 4: printf("O jogar 1 ganho um paus de %d\n", A.paus[valorcarta]);  break;
    case 5: printf("O jogar 1 ganho um joker de %d\n", A.jokers[valorjoker]);  break;
    }

    tipocarta = (rand() % 5) + 1;
    valorcarta = rand() % 13;
    valorjoker = rand() % 2;

    switch (tipocarta){
    case 1: printf("O jogar 2 ganho um copa de %d", A.copas[valorcarta]); break;
    case 2: printf("O jogar 2 ganho um ouros de %d", A.ouros[valorcarta]);  break;
    case 3: printf("O jogar 2 ganho um espadas de %d", A.espadas[valorcarta]);  break;
    case 4: printf("O jogar 2 ganho um paus de %d", A.paus[valorcarta]);  break;
    case 5: printf("O jogar 2 ganho um joker de %d", A.jokers[valorjoker]);  break;
    }

}