#include<stdio.h>

int main(){
    int a, b;

    if(&a > &b){
        printf("a tem o maior endereco = %p\nenquanto b tem = %p\n", &a, &b);
    }else{
        printf("b tem o maior endereco = %p\nenquanto a tem = %p\n", &b, &a);
    }

    return 0;
}