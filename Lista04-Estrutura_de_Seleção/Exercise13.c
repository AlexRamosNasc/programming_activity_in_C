#include <stdio.h>

int main(){
    int Dia, Mes, Ano;
    
scanf("%d %d %d", &Dia, &Mes, &Ano);

    if(Ano >= 1){
        if(Mes >= 1 && Mes <= 12){
            if(Mes == 2){
                if(Ano % 4 == 0 && Ano % 100 != 0 || Ano % 400 == 0){
                    if(Dia >= 1 && Dia <= 29){
                        printf("A data %02d/%02d/%04d é válida.", Dia, Mes, Ano);
                    }
                    else{
                        printf("A data %02d/%02d/%04d é inválida.", Dia, Mes, Ano);
                    }
                }
                else{
                    if(Dia >= 1 && Dia <= 28){
                        printf("A data %02d/%02d/%04d é válida.", Dia, Mes, Ano);
                    }
                    else{
                        printf("A data %02d/%02d/%04d é inválida.", Dia, Mes, Ano);
                    }
                }
            }
            else if(Mes == 4 || Mes == 6 || Mes == 9 || Mes == 11){
                if(Dia >= 1 && Dia <= 30){
                    printf("A data %02d/%02d/%04d é válida.", Dia, Mes, Ano);
                }
                else{
                    printf("A data %02d/%02d/%04d é inválida.", Dia, Mes, Ano);
                }
            }
            else{
                if(Dia >= 1 && Dia <= 31){
                    printf("A data %02d/%02d/%04d é válida.", Dia, Mes, Ano);
                }
                else{
                    printf("A data %02d/%02d/%04d é inválida.", Dia, Mes, Ano);
                }
            }
        }
        else{
            printf("A data %02d/%02d/%04d é inválida.", Dia, Mes, Ano);
        }
    }
    else{
        printf("A data %02d/%02d/%04d é inválida.", Dia, Mes, Ano);
    }
return 0;
}
