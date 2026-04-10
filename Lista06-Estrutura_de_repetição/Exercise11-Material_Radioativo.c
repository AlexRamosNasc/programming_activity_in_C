#include <stdio.h>

int main(){
    int Segundos = 0, Minutos = 0, Horas = 0;
    double Gramas;
    
    scanf("%lf", &Gramas);
    
    while(Gramas >= 1){
        Gramas *= 0.999;
        Segundos++;
        
        if(Segundos == 60){
            Minutos++;
            Segundos -= 60;
        }
        if(Minutos == 60){
            Minutos -= 60;
            Horas++;
        }
    }
    printf("%dh %dmin %ds", Horas, Minutos, Segundos);
    
    return 0;
}
