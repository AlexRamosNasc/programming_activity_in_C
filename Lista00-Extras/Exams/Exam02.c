#include <stdio.h>

int main(){
    int A, B, C, D, Numerador, Denominador;
    char Operacao, Continue;
    
    do{
        scanf("%d %d %c %d %d", &A, &B, &Operacao, &C, &D);
            
                switch(Operacao){
                    case '+':
                        switch(B == 0 || D == 0){
                            case 1: printf("Erro!\n"); break;
                            default:
                                Numerador = (A * D) + (B * C);
                                Denominador = B * D;
                                
                                printf("%d/%d + %d/%d = %d/%d\n",A, B, C, D, Numerador, Denominador);
                                break;
                        }
                    break;
                        
                    case '-':
                        switch(B == 0 || D == 0){
                            case 1: printf("Erro!\n"); break;
                            default:
                                Numerador = (A * D) - (B * C);
                                Denominador = B * D;
                                
                                printf("%d/%d - %d/%d = %d/%d\n",A, B, C, D, Numerador, Denominador);
                                break;
                        }
                    break;
                        
                    case '*':
                        switch(B == 0 || D == 0){
                            case 1: printf("Erro!\n"); break;
                            default:
                                Numerador = A * C;
                                Denominador = B * D;
                                
                                printf("%d/%d * %d/%d = %d/%d\n",A, B, C, D, Numerador, Denominador);
                                break;
                        }
                    break;
                        
                    case '/':
                        switch(B == 0 || D == 0 || C == 0){
                            case 1: printf("Erro!\n"); break;
                            default:
                                Numerador = A * D; 
                                Denominador = B * C;
                                
                                printf("%d/%d / %d/%d = %d/%d\n",A, B, C, D, Numerador, Denominador);
                                break;
                        }
                    break;
                }
        
        printf("Digite Y - para Continuar ou N - para Sair\n");
        scanf(" %c", &Continue);
        
    }while(Continue != 'N');
    
    return 0;
}
