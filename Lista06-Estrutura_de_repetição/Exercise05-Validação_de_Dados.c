#include <stdio.h> 

int main(){
    int Idade; 
    float Salario; 
    char Sexo, Estado_Civil;

    printf("Digite Idade:\n");
    scanf("%d", &Idade);

    while (Idade < 16 || Idade > 65) {
        printf("Idade inválida - digite novamente\n");
        scanf("%d", &Idade);
    }

    printf("Digite Salário:\n");
    scanf("%f", &Salario);

    while (Salario <= 0) {
        printf("Salário inválido - digite novamente\n");
        scanf("%f", &Salario);
    }

   printf("Digite Sexo [M/F]:\n");
   scanf(" %c", &Sexo);
   
   while(Sexo != 'M' && Sexo != 'F'){
       printf("Sexo inválido - digite novamente\n");
       scanf(" %c", &Sexo);
   }

    printf("Digite Estado Civil [S/C/V/D]:\n");
    scanf(" %c", &Estado_Civil);

    while (Estado_Civil != 'S' && Estado_Civil != 'C' &&
           Estado_Civil != 'V' && Estado_Civil != 'D') {
        printf("Estado Civil inválido - digite novamente\n");
        scanf(" %c", &Estado_Civil);
           }

    return 0;
}
