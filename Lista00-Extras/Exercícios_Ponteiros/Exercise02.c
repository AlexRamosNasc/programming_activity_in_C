#include <stdio.h>

struct ocorencia{
    float comprimento;
    float largura;
};

void mudar(struct ocorencia vet[]){
    float area[10];
   for(int i = 0; i < 10; i++){
        area[i] = vet[i].comprimento * vet[i].largura;
    }
    for(int i = 0; i < 10; i++){
        printf("Area %d = %.2f\n", (i + 1), area[i]);
    } 
}

int main(){
    struct ocorencia vet[10] = {
        {12, 23},
        {2.45, 234},
        {34.67,908},
        {75.56,2345},
        {757.654,64},
        {23.456,2345},
        {23.56,78},
        {12.34,56.78},
        {22, 56.87},
        {1.1,2.2}
    };

    mudar(vet);

    return 0;
}