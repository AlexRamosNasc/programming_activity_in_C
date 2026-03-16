#include <stdio.h>

int main(){
    int Dia, Mes, Data;
    
    scanf("%d %d", &Dia, &Mes);
    
    Mes = Mes * 100;
    Data = Mes + Dia;
    
    if(Data >= 321 && Data <= 420){
        printf("Áries\n");
    }
    else if(Data >= 421 && Data <= 520){
        printf("Touro\n");
    }
    else if(Data >= 521 && Data <= 620){
        printf("Gêmeos\n");
    }
    else if(Data >= 621 && Data <= 721){
        printf("Câncer\n");
    }
    else if(Data >= 722 && Data <= 822){
        printf("Leão\n");
    }
    else if(Data >= 823 && Data <= 922){
        printf("Virgem\n");
    }
    else if(Data >= 923 && Data <= 1022){
        printf("Libra\n");
    }
    else if(Data >= 1023 && Data <= 1121){
        printf("Escorpião\n");
    }
    else if(Data >= 1122 && Data <= 1221){
        printf("Sagitário\n");
    }
    else if(Data >= 1222 || Data <= 120){
        printf("Capricórnio\n");
    }
    else if(Data >= 121 && Data <= 219){
        printf("Aquário\n");
    }
    else if(Data >= 220 && Data <= 320){
        printf("Peixes\n");
    }
    return 0;
}
