#include <stdio.h>

int main(){
    char Sexo;
    float Macho = 0, Femea = 0, Pmacho, MMidade, Pfemea, MFidade, TMidade = 0, TFidade = 0, Idade;

    for(int I = 1; I <= 6; I++){
        
        scanf("%c %f", &Sexo, &Idade);
        
        if(Sexo == 'M'){
            Macho++;
            TMidade += Idade;
        }
        if(Sexo == 'F'){
            Femea++;
            TFidade += Idade;
        }
    }
Pmacho = (Macho / 6) * 100;
MMidade = TMidade / Macho;
Pfemea = (Femea / 6) * 100;
MFidade = TFidade / Femea;
    
printf("Porcentagem de pessoas do sexo masculino: %.2f%%\nMédia de idade do sexo masculino: %.2f\nPorcentagem de pessoas do sexo feminino: %.2f%%\nMédia de idade do sexo feminino: %.2f\n", Pmacho, MMidade, Pfemea, MFidade );
    
return 0;
}
