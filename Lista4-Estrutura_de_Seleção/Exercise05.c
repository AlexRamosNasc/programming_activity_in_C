#include <stdio.h>

int main(){
    int X, Y;
    
    scanf("%d %d", &X, &Y);

    if(X > Y){
        printf("Maior: %d\nMenor: %d\n", X, Y );
    }
    else if(Y > X){
        printf("Maior: %d\nMenor: %d\n", Y, X );
    }
    else{
        printf("Os números são iguais");
    }
    
    return 0;
}
