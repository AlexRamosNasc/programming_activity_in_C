#include <stdio.h>

int main(){
    int X, Y;
    
    scanf("%d", &X);
    
    X %= 10;
    
    if(X == 0 || X == 1 || X == 2){
        printf("pagamento até 10/fevereiro");
    }
    else if(X == 3 || X == 4 || X == 5){
        printf("pagamento até 10/abril");
    }
    else if(X == 6 || X == 7){
        printf("pagamento até 10/junho");
    }
    else{
        printf("pagamento até 10/agosto");
    }
    
    return 0;
}
