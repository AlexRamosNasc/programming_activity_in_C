#include <stdio.h>
int main(){
    int x, y;
    
    int *px, *py;

    px = &x;
    py = &y;

    *px = 10;
    *py = 3;

    if(px > py){
        printf("x eh maior %p", px);
    }
    if(py > px){
        printf("y eh maior %p", py);
    }

   return 0;
}
