#include <stdio.h>
int main(){
    double n, x, r, E;

    scanf("%lf %lf", &n, &x);
    while (n < 0 || x < 0){
        printf("Entrada invalida");
        scanf("%lf %lf", &n, &x);
    }

    r = x;

    E = (r * r) - n;
    if(E < 0){
        E = E * -1;
    }

    while(E > 0.0001){
        E = (r * r) - n;
        if(E < 0){
            E = E * -1;
        }

        if(E >= 0.0001){
            x = r;
            r = (x + (n / x)) / 2;
        }
    }
    printf("%lf", r);

    return 0;
}
