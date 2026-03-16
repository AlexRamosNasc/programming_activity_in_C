#include <stdio.h>

int main(){
    int X;
    
    scanf("%d", &X);
    
    if(X == 1){
        printf("Bela Vista");
    }
    else if(X == 2){
        printf("Figueira");
    }
    else if(X == 3){
        printf("Sta Terezinha");
    }
    else{
        printf("Código inexistente");
    }

    return 0;
}
