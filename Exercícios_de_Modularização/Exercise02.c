#include <stdio.h>

void data(int dia, int mes, int ano){
    switch(mes){
        case 1: printf ("%0d de janeiro de %d\n",   dia, ano); break;
        case 2: printf ("%0d de fevereiro de %d\n", dia, ano); break;
        case 3: printf ("%0d de março de %d\n",     dia, ano); break;
        case 4: printf ("%0d de abril de %d\n",     dia, ano); break;
        case 5: printf ("%0d de maio de %d\n",      dia, ano); break;
        case 6: printf ("%0d de junho de %d\n",     dia, ano); break;
        case 7: printf ("%0d de julho de %d\n",     dia, ano); break;
        case 8: printf ("%0d de agosto de %d\n",    dia, ano); break;
        case 9: printf ("%0d de setembro de %d\n",  dia, ano); break;
        case 10: printf("%0d de outubro de %d\n",   dia, ano); break;
        case 11: printf("%0d de novembro de %d\n",  dia, ano); break;
        case 12: printf("%0d de dezembro de %d\n",  dia, ano); break;
        default: printf("Mês inválido!\n"); break;
    }
}

int main(){
    int dia, mes, ano;
    printf("Digite a data (DD MM AAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    data(dia, mes, ano);
    return 0;
}
