#include <stdio.h>

void fun(int *px, int *py){
    *px += *py;
}

int main(){
    int x = 10, y = 3;
    
    printf("x vale %d\n", x);
    printf("E y vale %d\n\n", y);

    fun(&x, &y);

    printf("x vale %d\n", x);
    printf("E y vale %d\n\n", y);

   return 0;
}
