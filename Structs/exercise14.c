#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Data{
    int dia;
    int mes;
    int ano;
};
struct Agenda{
    char compromisso[60];
    struct Data data;
};

struct Agenda ler(void){
    struct Agenda a;
    scanf(" %[^\n]", a.compromisso);
    scanf("%d", &a.data.dia);
    scanf("%d", &a.data.mes);
    scanf("%d", &a.data.ano);
    return a;
}

void busca(struct Agenda item, int mes, int ano){
    if(item.data.mes == mes && item.data.ano == ano){
        printf("%s\n", item.compromisso);
    }
}

int main(){
    struct Agenda vet[5];
    int mes, ano;

    for(int i = 0; i < 5; i++){
        vet[i] = ler();
    }
    
    do{
    printf("Digite um Mes: se dejesa encerar digite 0\n");
    scanf("%d", &mes);
    if(mes != 0){
        printf("Digite um Ano: \n");
        scanf("%d", &ano);
        
        printf("Essas sao as opçoes\n");
        for(int i = 0; i < 5; i++){
            busca(vet[i], mes, ano);
        }
    }
    }while(mes != 0);
    
    return 0;
}
