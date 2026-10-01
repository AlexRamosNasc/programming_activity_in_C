#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Polar{
    float r;
    float a;
};

struct Cartesiano{
    float x;
    float y;
};


int main(){
    struct polar pontoP;
    struct Cartesiano pontoC 
    

    scanf("%f", &pontoP.r);
    scanf("%f", &pontoP.a);

    pontoC.x = pontoP.r * cos(pontoP.a);
    pontoC.y = pontoP.r * sin(pontoP.a);
    
    printf("P (r, a) = (%.2f, %.2f rad)\n", pontoP.r, pontoP.a);
    printf("P (x, y) = (%.2f, %.2f car)\n", pontoC.x, pontoC.y);

    return 0;
}