#include <stdio.h>

int main() {
    int hotel[5][10] = {0};
    int n;
    
    printf("Escolha sua ação: 1-Imprimir lista de quartos, 2-Definir ocupação e 3-Sair.\n");
    scanf("%d", &n);
    
    if(n == 3){return 0;}
    
    while(n != 1 && n != 2 && n != 3){
        printf("Opção invalida!\n");
        printf("Escolha sua ação: 1-Imprimir lista de quartos, 2-Definir ocupação e 3-Sair.\n");
        scanf("%d", &n);
        if(n == 3){return 0;}
    }
    
    while(n != 3){
        switch(n){
            case 1:
            printf("| Andar v |---| Quartos > |---| 0 = livre, 1 = ocupado |\n");
            for(int i = 0; i < 5; i++){
                for(int j = 0; j < 10; j++){
                    printf("%d ", hotel[i][j]);
                    if(i == 4 && j == 9){
                    printf("\n");
                    }
                }
                printf("\n");
            }
            break;
           
            case 2:
            int andar, quarto, m;
            printf("Insira o andar de 1 a 5 e o quarto de 1 a 10 que quer ocupar entao digite 1.\n");
            scanf("%d %d %d", &andar, &quarto, &m);
            hotel[andar - 1][quarto - 1] = m;
            break;
            
            case 3: return 0;  
        }
        
        printf("Escolha sua ação: 1-Imprimir lista de quartos, 2-Definir ocupação e 3-Sair.\n");
        scanf("%d", &n);
        
        if(n == 3){return 0;}
        
        while(n != 1 && n != 2 && n != 3){
            printf("Opção invalida!\n");
            printf("Escolha sua ação: 1-Imprimir lista de quartos, 2-Definir ocupação e 3-Sair.\n");
            scanf("%d", &n);
            if(n == 3){return 0;}
        }
    }
    return 0;
}
