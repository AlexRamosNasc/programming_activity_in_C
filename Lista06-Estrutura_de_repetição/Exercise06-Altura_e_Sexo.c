#include <stdio.h>

int main()
{
    char Sexo;
    float AlturaM, AlturaF, MAlturaM, MAlturaF, TAlturaM, TAlturaF;
    int Masculino = 0, Feminino = 0;
    
    scanf(" %c", &Sexo);
    
    while(Sexo != 'X' && Sexo != 'x'){
        if(Sexo == 'M' || Sexo == 'm'){
            scanf("%f", &AlturaM);
            Masculino++;
            TAlturaM += AlturaM;
        }
        if(Sexo == 'F' || Sexo == 'f'){
            scanf("%f", &AlturaF);
            Feminino++;
            TAlturaF += AlturaF;
        }
        scanf(" %c", &Sexo);
    }
    if(Feminino == 0){
        printf("Não foi registrado nenhum sexo feminino.\n");
        
        MAlturaM = TAlturaM / Masculino;
        printf("Altura média do sexo masculino: %.2f\n", MAlturaM);
    }
    else if(Masculino == 0){
        MAlturaF = TAlturaF / Feminino;
        printf("Altura média do sexo feminino: %.2f\n", MAlturaF);
       
        printf("Não foi registrado nenhum sexo masculino.\n");
    }
    else{
        MAlturaF = TAlturaF / Feminino;
        printf("Altura média do sexo feminino: %.2f\n", MAlturaF);
        
        MAlturaM = TAlturaM / Masculino;
        printf("Altura média do sexo masculino: %.2f\n", MAlturaM);
    }
    return 0;
}
