#include <stdio.h>

int main()
{
    float Num1 , Num2, Resultado;
    char Operacao;
    
    printf("Digite um numero um operador básico (+, -, *, /) e o outro numero nesta ordem para receber o resultado do problema\n");
    scanf("%f %c %f", &Num1, &Operacao, &Num2);

    switch(Operacao){
        case '+': 
        Resultado = Num1 + Num2; 
        printf("\nSeu resultado é %.2f", Resultado); 
        break;
        
        case '-':
        Resultado = Num1 - Num2;
        printf("\nSeu resultado é %.2f", Resultado);
        break;
        
        case '*':
        Resultado = Num1 * Num2;
        printf("\nSeu resultado é %.2f", Resultado);
        break;
        
        case '/':
        Resultado = Num1 / Num2;
        printf("\nSeu resultado é %.2f", Resultado); 
        break;
        
        default: printf("\nOperador invalido.");
    }

    return 0;
}
