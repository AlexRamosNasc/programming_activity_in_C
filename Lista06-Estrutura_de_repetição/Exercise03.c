#include <stdio.h>

int main(){
    char Sexo;
    float Macho = 0, Femea = 0, Pmacho, MMidade, Pfemea, MFidade, TMidade = 0, TFidade = 0, Idade, HAdulto = 0, MAdulto = 0, HIdoso = 0, MIdoso = 0;
    
    scanf(" %f %c", &Idade, &Sexo);
    
    while(Idade > 0){
        if(Sexo == 'M'){
            Macho++;
            TMidade += Idade;
            if(HIdoso < Idade){
                HIdoso = Idade;
            }
            
            if(Idade >= 25 && Idade <= 33){
                HAdulto++;
            }
        }
        if(Sexo == 'F'){
            Femea++;
            TFidade += Idade;
            if(MIdoso < Idade){
                MIdoso = Idade;
            }
            if(Idade >= 18 && Idade <= 25){
                MAdulto++;
            }
        }
        scanf(" %f %c", &Idade, &Sexo);
    }
if(Macho == 0){
    Pfemea = (Femea / 15) * 100;
    MFidade = TFidade / Femea;
    printf("Nenhum homem foi registrado.");
    
    return 0;
}
if(Femea == 0){
    Pmacho = (Macho / 15) * 100;
    MMidade = TMidade / Macho;
    printf("Porcentagem de pessoas do sexo masculino: %.2f%%\nMédia de idade do sexo masculino: %.2f\nNão há mulheres no grupo\n", Pmacho, MMidade);
    
    return 0;

Pmacho = (HAdulto / Macho) * 100;
MMidade = TMidade / Macho;
Pfemea = (MAdulto / Femea) * 100;
MFidade = TFidade / Femea;

printf("Média de idade dos homens: %.2f\nPercentual de homens entre 25 e 33 anos: %.2f%%\nIdade do homem mais idoso: %.0f\nMédia de idade das mulheres: %.2f\nPercentual de mulheres entre 18 e 25 anos: %.2f%%\nIdade da mulher mais idosa: %.0f\n", MMidade, Pmacho, HIdoso, MFidade, Pfemea, MIdoso);
     
return 0;   
}

TERMINAR
