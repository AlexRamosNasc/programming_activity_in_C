#include<stdio.h>

void mudar(int *pa, int *pb){
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    printf("A = %d, B = %d\n", a, b);

    mudar(&a, &b);

    printf("A = %d, B = %d\na", a, b);

    return 0;
}