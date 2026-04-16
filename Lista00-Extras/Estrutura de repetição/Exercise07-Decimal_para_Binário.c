#include <stdio.h>

int main() {
    int Num, i = 0;
    int binario[32]; // Vetor para guardar os restos (0s e 1s)

    printf("Digite um numero: ");
    scanf("%d", &Num);

    // Caso especial para o número 0
    if (Num == 0) {
        printf("0");
        return 0;
    }

    // Guarda os restos no vetor
    while (Num > 0) {
        binario[i] = Num % 2;
        Num = Num / 2;
        i++;
    }

    // Imprime o vetor de trás para frente (ordem correta)
    printf("Binario: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }

    printf("\n");
    return 0;
}
