#include <stdio.h>

int main(){
    char Letra;
    
    printf("Digite uma letra do alfabeto em caixa alta para saber se é vogal ou consoante.\n");
    scanf("%c", &Letra);
    
    switch(Letra){
        case 'A': 
        case 'E': 
        case 'I': 
        case 'U': printf("\nEsta letra é uma vogal"); break;
        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z': printf("\nEsta letra é uma consoante."); break;
        default: printf("\ncaractere inválido.");
    }
    
    return 0;
}
