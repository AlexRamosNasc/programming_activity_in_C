#include <stdio.h>

int main()
{
    float refil, unidades_De_Insulina, quantidade_gasta = 0, aplicacoes;
    scanf("%f", &quantidade_gasta);
    
    unidades_De_Insulina = 300;
    
    aplicacoes = unidades_De_Insulina / (quantidade_gasta + 2);
    
    printf("%.2f", aplicacoes);
    return 0;
}
