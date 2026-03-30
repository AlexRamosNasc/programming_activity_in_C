#include <stdio.h>

int main(){
    char Sexo;
    float Macho = 0, Femea = 0, Pmacho, MMidade, Pfemea, MFidade, TMidade = 0, TFidade = 0, Idade;

    for(int I = 1; I <= 15; I++){
        
        scanf(" %c %f", &Sexo, &Idade);
        
        if(Sexo == 'M'){
            Macho++;
            TMidade += Idade;
        }
        if(Sexo == 'F'){
            Femea++;
            TFidade += Idade;
        }
    }

if(Macho == 0){
    Pfemea = (Femea / 15) * 100;
    MFidade = TFidade / Femea;
    printf("Não há homens no grupo\nPorcentagem de pessoas do sexo feminino: %.2f%%\nMédia de idade do sexo feminino: %.2f\n", Pfemea, MFidade);
    
    return 0;
}
if(Femea == 0){
    Pmacho = (Macho / 15) * 100;
    MMidade = TMidade / Macho;
    printf("Porcentagem de pessoas do sexo masculino: %.2f%%\nMédia de idade do sexo masculino: %.2f\nNão há mulheres no grupo\n", Pmacho, MMidade);
    
    return 0;
}

Pmacho = (Macho / 15) * 100;
MMidade = TMidade / Macho;
Pfemea = (Femea / 15) * 100;
MFidade = TFidade / Femea;

printf("Porcentagem de pessoas do sexo masculino: %.2f%%\nMédia de idade do sexo masculino: %.2f\n", Pmacho, MMidade);
printf("Porcentagem de pessoas do sexo feminino: %.2f%%\nMédia de idade do sexo feminino: %.2f\n", Pfemea, MFidade);

return 0;
}
