#include <stdio.h>

int main(){
    
    float Anos, Salario, Bonus;
    
    scanf ("%f %f", &Anos, &Salario);
    if (Anos >= 3){
        Bonus = Salario * 0.75;
        printf ("Bônus: R$ %.2f", Bonus);
    }
    else{
        Bonus = Salario * 0.5;
        printf ("Bônus: R$ %.2f", Bonus);
    }
}
