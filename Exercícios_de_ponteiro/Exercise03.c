#include <stdio.h>

void fun(int *px, int *py){
    int temp;
    temp = *py;
    *py = *px;
    *px = temp;

    printf("x vale %d\n", *px);
    printf("E y vale %d", *py);
}

int main(){
    int x = 10, y = 3;
    
    printf("x vale %d\n", x);
    printf("E y vale %d\n\n", y);

    fun(&x, &y);

   return 0;
}
