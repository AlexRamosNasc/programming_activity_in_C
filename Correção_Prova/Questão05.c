#include <stdio.h>
int main() {
    double data;
    int h = 0, min = 0, s = 0;
    
    scanf("%lf", &data);

    while (data > 1.0){
        data -= (data * 0.00001);
        s++;
        if(s == 60){
            s = 0;
            min++;
            if(min % 2 == 0){
                data -= 2;
            }
        }
        if(min == 60){
            min = 0;
            h++;
        }
    }

    if(data < 0){
        data = 0;
    }

    printf("Tempo total: %dh %dmin %ds\n", h, min, s);
    printf("Saldo restante: %.4lf MB\n", data);
    
    return 0;
}
