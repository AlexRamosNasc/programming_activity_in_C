#include <stdio.h>

int main(){
    float Media, Pcriança, Pjovem, Padulto, N, Idade, Criança = 0, Jovem = 0, Adulto = 0, Total = 0;
    
    scanf("%f", &N);
    
    for(int I = 1; I <= N; I++){
        
        scanf("%f", &Idade);
        
        Total = Total + Idade;
        
        if(Idade < 18){
            Criança++;
        }
        if(Idade >= 18 && Idade <= 22){
            Jovem++;
        }
        if(Idade > 22){
            Adulto++;
        }
    }
    
    Media = Total / N;
    Pcriança = (Criança / N) * 100;
    Pjovem = (Jovem / N) * 100;
    Padulto = (Adulto / N) * 100;
    
    printf("Idade média: %.2f%%\nPercentual de pessoas com menos de 18 anos: %.2f%%\nPercentual de pessoas com idade entre 18 e 22 anos: %.2f%%\nPercentual de pessoas com mais de 22 anos: %.2f%%\n", Media, Pcriança, Pjovem, Padulto);
    
}
