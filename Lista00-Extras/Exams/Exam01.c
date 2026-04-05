#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroAleatorio, jogador;
    char continuar;

    do {
        numeroAleatorio = rand()%3+1;

        scanf("%d", &jogador);

        switch (numeroAleatorio) {
            case 1:
                printf("Computador jogou: Pedra\n");
                switch (jogador) {
                    case 1:
                        printf("Você jogou: Pedra\n");
                        printf("Empate\n");
                        break;
                    case 2:
                        printf("Você jogou: Papel\n");
                        printf("Você Ganhou: Papel embrulha Pedra\n");
                        break;
                    case 3:
                        printf("Você jogou: Tesoura\n");
                        printf("Computador Ganhou: Pedra quebra Tesoura\n");
                        break;
                }
                break;

            case 2:
                printf("Computador jogou: Papel\n");
                switch (jogador) {
                    case 1:
                        printf("Você jogou: Pedra\n");
                        printf("Computador Ganhou: Papel embrulha Pedra\n");
                        break;
                    case 2:
                        printf("Você jogou: Papel\n");
                        printf("Empate\n");
                        break;
                    case 3:
                        printf("Você jogou: Tesoura\n");
                        printf("Você Ganhou: Tesoura corta Papel\n");
                        break;
                }
                break;

            case 3:
                printf("Computador jogou: Tesoura\n");
                switch (jogador) {
                    case 1:
                        printf("Você jogou: Pedra\n");
                        printf("Você Ganhou: Pedra quebra Tesoura\n");
                        break;
                    case 2:
                        printf("Você jogou: Papel\n");
                        printf("Computador Ganhou: Tesoura corta Papel\n");
                        break;
                    case 3:
                        printf("Você jogou: Tesoura\n");
                        printf("Empate\n");
                        break;
                }
                break;
        }

        printf("Digite Y - para Continuar ou N - para Encerrar\n");
        scanf(" %c", &continuar);

    } while (continuar == 'Y');

    return 0;
}
