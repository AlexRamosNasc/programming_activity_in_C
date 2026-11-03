#include<stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    if(&a > &b){
        printf("a vale = %d", a);
    }else{
        printf("b vale = %d", b);
    }

    return 0;
}