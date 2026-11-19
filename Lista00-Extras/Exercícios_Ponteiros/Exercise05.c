#include <stdio.h>

struct Data {
int dia;
int mes;
int ano;
int livre;
};

void preencher(struct Data *vet[], int *mes){
    for(int i = 0; i < 30; i++){
        vet[i]->dia = i + 1;
        vet[i]->mes = *mes;
        vet[i]->ano = 2026;
        vet[i]->livre = 1;
    }
}

int livre(struct Data *vet[], int *dia){
    for(int i = 0; i < 30; i++){
        if(*dia == vet[i]->dia){
            if(vet[i]->livre == 1){
                vet[i]->livre = 0;
                printf("esse dia esta livre e foi ocupado\n");
                return 0;
            }
        }
    }
    for(int i = *dia; i < 30; i++){
        if(vet[i]->livre == 1){
            vet[i]->livre = 0;
            printf("esse dia esta ocupado entao o dia %d foi escolhido no lugar e foi ocupado\n", (i + 1));
            return 0;
        }
    }
}

void mostra(struct Data *vet[]){
    printf("dias livres\n");
    for(int i = 0; i < 30; i++){
        if(vet[i]->livre == 1){
            printf("%d, ", vet[i]->dia);
        }
    }
    printf("\ndias ocupados\n");
    for(int i = 0; i < 30; i++){
        if(vet[i]->livre == 0){
            printf("%d, ", vet[i]->dia);
        }
    }
    printf("\n");
}

int main(){
    struct Data vet[30];
    struct Data *Pvet[30];
    int mes, dia, x = 1;
    
    for(int i = 0; i < 30; i++){
        Pvet[i] = &vet[i];
    }

    printf("escolha um mes de 1 a 12:\n");
    scanf("%d", &mes);

    preencher(Pvet, &mes);

    do{
        printf("escolha um dia do mes\n");
        scanf("%d", &dia);

        livre(Pvet, &dia);

        printf("deseja encerrar digite 0\n");
        scanf("%d", &x);
    }while(x);

    mostra(Pvet);

    return 0;
}