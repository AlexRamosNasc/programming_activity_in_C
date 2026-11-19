#include <stdio.h>

int main(){
    int x = 5, y = 9, temp;
    int *px, *py;
    px = &x;
    py = &y;

    printf("x = %d, y = %d\n", x, y);

    temp = *py;
    *py = *px;
    *px = temp;

    printf("x = %d, y = %d\n", x, y);

    return 0;
}