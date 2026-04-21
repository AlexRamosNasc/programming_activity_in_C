#include <stdio.h>

int main() {
    int A[50];
    int count = 0;  // Quantos números válidos encontramos (índice do vetor)
    int num = 0;    // O número natural que estamos testando no momento

    // O laço continua até encontrarmos 50 números (índices 0 a 49)
    while (count < 50) {
        
        // Regra: Múltiplo de 3 (num % 3 == 0) OU termina com 3 (num % 10 == 3)
        if (num % 3 == 0 || num % 10 == 3) {
            A[count] = num;
            count++; // Só avançamos o índice do vetor se o número for válido
        }
        
        num++; // Testa o próximo número natural
    }

    // Exibição
    for (int i = 0; i < 50; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
