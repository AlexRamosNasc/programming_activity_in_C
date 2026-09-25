#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Sorteio(){
    int aleatorio;

    aleatorio = (rand() % 10) + 1;

    return aleatorio;
}

int main(){
    srand(time(NULL));
    int num, vet[10] = {0}, x = 0, maior = -1;

    for(int i = 0; i < 100; i++){
        num = Sorteio();
    
        vet[num - 1]++;
    }

    for(int i = 0; i < 10; i++){
        printf("%d: %d/ ",i + 1 ,vet[i]);
    }
    
    for(int i = 0; i < 10; i++){
        if(vet[i] > maior){
            maior = vet[i]; // Atualiza o recorde de aparências
            x = i + 1;      // Guarda o número sorteado (ajustando o índice se os números forem de 1 a 10)
        }
    }
    printf("\nO vencedor é o %d\n", x);

    return 0;
}
