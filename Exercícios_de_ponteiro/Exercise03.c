#include <stdio.h>

int fun(int x, int y){
    int temp;
    temp = y;
    y = x;
    x = temp;

    printf("x vale %d\n", x);
    printf("E y vale %d", y);
}

int main(){
    int x = 10, y = 3;
    int *px, *py;

    px = &x;
    py = &y;

    printf("x vale %d\n", *px);
    printf("E y vale %d\n\n", *py);

    fun(x, y);

   return 0;
}
