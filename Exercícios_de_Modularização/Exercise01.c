#include <stdio.h>

int dobro(int x){
    return x * 2;   
}

int main(){
    int num;
    scanf("%d", &num);
    printf("O dobro de %d eh = %d", num, dobro(num));
    return 0;
}
