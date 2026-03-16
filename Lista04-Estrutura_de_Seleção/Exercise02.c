#include <stdio.h>

int main(){
    
    float Idade;
    
    scanf ("%f", &Idade);
    if (Idade >= 0 && Idade <= 10){
        printf ("Infantil");
    }
    else if (Idade >= 11 && Idade <= 17){
        printf ("Juvenil");
    }
    else if (Idade >= 18 && Idade <= 64){
        printf ("Adulto");
    }
    else{;
        printf ("Sênior");
    }
}
